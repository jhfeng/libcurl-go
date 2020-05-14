libcurl-go
=======

golang libcurl binding, forked from https://github.com/andelf/go-curl 
This repo will support libcurl enhanced by OQS team (https://github.com/open-quantum-safe/oqs-demos/tree/master/curl)

LICENSE
-------

libcurl-go is licensed under the Apache License, Version 2.0 (http://www.apache.org/licenses/LICENSE-2.0.html).

Current Development Status
--------------------------

 * currently stable
 * READ, WRITE, HEADER, PROGRESS function callback
 * a Multipart Form supports file uploading
 * Most curl_easy_setopt option
 * partly implement share & multi interface
 * new callback function prototype

How to Install
--------------

Assuming your OQS version of libcurl, openssl and liboqs are build and installed in /opt/oqssa

    $ PKG_CONFIG_PATH=/opt/oqssa/lib/pkgconfig go get -u github.com/jhfeng/libcurl-go

Current Status
--------------

 * Linux x64
   
 * Mac OS
 
 
 Sample code
--------------
 See more examples in ./examples/ directory~!
   

 How to build OQS curl
----------------------

// define the Curl version to be baked in
export CURL_VERSION=7.69.1

// Default location where all binaries wind up:
export INSTALLDIR=/opt/oqssa

// liboqs build type variant
export LIBOQS_BUILD_TYPE=Generic

// get all sources
cd /opt
git clone --single-branch --branch master https://github.com/open-quantum-safe/liboqs && \
    git clone --single-branch --branch OQS-OpenSSL_1_1_1-stable https://github.com/open-quantum-safe/openssl ossl-src && \
    wget https://curl.haxx.se/download/curl-${CURL_VERSION}.tar.gz && tar -zxvf curl-${CURL_VERSION}.tar.gz
    
// Add curl patchfile
wget https://github.com/open-quantum-safe/oqs-demos/blob/master/curl/patch-7.69.1.oqs.txt  

// build liboqs shared and static
cd /opt/liboqs
mkdir build && cd build && cmake .. ${LIBOQS_BUILD_DEFINES} -DBUILD_SHARED_LIBS=ON -DCMAKE_INSTALL_PREFIX=/opt/ossl-src/oqs && make && make install
mkdir build-static && cd build-static && cmake .. -DCMAKE_BUILD_TYPE=${LIBOQS_BUILD_TYPE} -DBUILD_SHARED_LIBS=OFF -DCMAKE_INSTALL_PREFIX=/opt/ossl-src/oqs && make && make install

// build OQS-OpenSSL
cd /opt/ossl-src

// curl looks for shared libraries at ./configure time 
LDFLAGS="-Wl,-rpath -Wl,${INSTALLDIR}/lib" ./config shared --prefix=${INSTALLDIR} && \
    make && make install;
    
// set path to use 'new' openssl & curl. Dyn libs have been properly linked in to match 
export PATH="${INSTALLDIR}/bin:${PATH}"

// build curl 
cd /opt/curl-${CURL_VERSION}
patch -p1 < /opt/patch-7.69.1.oqs.txt

// For curl debugging enable it by adding the line below to the configure command:
//                   --enable-debug 

CPPFLAGS="-I/opt/ossl-src/oqs/include" LDFLAGS=-Wl,-R${INSTALLDIR}/lib  \
    ./configure --prefix=${INSTALLDIR} --with-ssl=${INSTALLDIR} && \
    make && make install
