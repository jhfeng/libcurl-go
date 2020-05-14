libcurl-go
=======

golang libcurl(curl) binding, clonging from https://github.com/andelf/go-curl


LICENSE
-------

go-curl is licensed under the Apache License, Version 2.0 (http://www.apache.org/licenses/LICENSE-2.0.html).

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

Make Sure You Have OQS libcurl https://github.com/open-quantum-safe/oqs-demos/tree/master/curl (and its develop headers, static/dynamic libs) installed!


    $ go get -u github.com/jhfeng/libcurl-go

Current Status
--------------

 * Linux x64
   
 * Mac OS
 
 
 Sample code
--------------
 See more examples in ./examples/ directory~!
   
