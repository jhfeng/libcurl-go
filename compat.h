
/* generated by compatgen.py */
#include<curl/curl.h>



#if (LIBCURL_VERSION_MINOR == 70 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 70 
#if (LIBCURL_VERSION_MINOR == 69 && LIBCURL_VERSION_PATCH < 1) || LIBCURL_VERSION_MINOR < 69 
#if (LIBCURL_VERSION_MINOR == 69 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 69 
#define CURLE_QUIC_CONNECT_ERROR -1
#if (LIBCURL_VERSION_MINOR == 68 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 68 
#define CURLE_HTTP3 -1
#if (LIBCURL_VERSION_MINOR == 67 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 67 
#define CURL_VERSION_ESNI 0
#if (LIBCURL_VERSION_MINOR == 66 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 66 
#define CURLOPT_SASL_AUTHZID 0
#define CURLE_AUTH_ERROR -1
#define CURLINFO_RETRY_AFTER 0
#define CURL_VERSION_HTTP3 0
#if (LIBCURL_VERSION_MINOR == 65 && LIBCURL_VERSION_PATCH < 3) || LIBCURL_VERSION_MINOR < 65 
#if (LIBCURL_VERSION_MINOR == 65 && LIBCURL_VERSION_PATCH < 2) || LIBCURL_VERSION_MINOR < 65 
#if (LIBCURL_VERSION_MINOR == 65 && LIBCURL_VERSION_PATCH < 1) || LIBCURL_VERSION_MINOR < 65 
#if (LIBCURL_VERSION_MINOR == 65 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 65 
#define CURLOPT_MAXAGE_CONN 0
#if (LIBCURL_VERSION_MINOR == 64 && LIBCURL_VERSION_PATCH < 1) || LIBCURL_VERSION_MINOR < 64 
#define CURLOPT_ALTSVC_CTRL 0
#define CURLOPT_ALTSVC 0
#define CURL_VERSION_ALTSVC 0
#if (LIBCURL_VERSION_MINOR == 64 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 64 
#define CURLOPT_TRAILERFUNCTION 0
#define CURLOPT_TRAILERDATA 0
#define CURLOPT_HTTP09_ALLOWED 0
#if (LIBCURL_VERSION_MINOR == 63 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 63 
#define CURLOPT_CURLU 0
#if (LIBCURL_VERSION_MINOR == 62 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 62 
#define CURLOPT_DOH_URL 0
#define CURLOPT_UPLOAD_BUFFERSIZE 0
#define CURLOPT_UPKEEP_INTERVAL_MS 0
#define CURLE_OBSOLETE51 -1
#if (LIBCURL_VERSION_MINOR == 61 && LIBCURL_VERSION_PATCH < 1) || LIBCURL_VERSION_MINOR < 61 
#if (LIBCURL_VERSION_MINOR == 61 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 61 
#define CURLOPT_TLS13_CIPHERS 0
#define CURLOPT_PROXY_TLS13_CIPHERS 0
#define CURLOPT_DISALLOW_USERNAME_IN_URL 0
#define CURLINFO_TOTAL_TIME_T 0
#define CURLINFO_NAMELOOKUP_TIME_T 0
#define CURLINFO_CONNECT_TIME_T 0
#define CURLINFO_PRETRANSFER_TIME_T 0
#define CURLINFO_STARTTRANSFER_TIME_T 0
#define CURLINFO_REDIRECT_TIME_T 0
#define CURLINFO_APPCONNECT_TIME_T 0
#define CURLAUTH_BEARER 0
#if (LIBCURL_VERSION_MINOR == 60 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 60 
#define CURLOPT_HAPROXYPROTOCOL 0
#define CURLOPT_DNS_SHUFFLE_ADDRESSES 0
#if (LIBCURL_VERSION_MINOR == 59 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 59 
#define CURLOPT_TIMEVALUE_LARGE 0
#define CURLOPT_HAPPY_EYEBALLS_TIMEOUT_MS 0
#define CURLOPT_RESOLVER_START_FUNCTION 0
#define CURLOPT_RESOLVER_START_DATA 0
#define CURLE_RECURSIVE_API_CALL -1
#define CURLINFO_FILETIME_T 0
#if (LIBCURL_VERSION_MINOR == 58 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 58 
#if (LIBCURL_VERSION_MINOR == 57 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 57 
#define CURL_VERSION_BROTLI 0
#if (LIBCURL_VERSION_MINOR == 56 && LIBCURL_VERSION_PATCH < 1) || LIBCURL_VERSION_MINOR < 56 
#if (LIBCURL_VERSION_MINOR == 56 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 56 
#define CURLOPT_SSH_COMPRESSION 0
#define CURLOPT_MIMEPOST 0
#define CURL_VERSION_MULTI_SSL 0
#if (LIBCURL_VERSION_MINOR == 55 && LIBCURL_VERSION_PATCH < 1) || LIBCURL_VERSION_MINOR < 55 
#if (LIBCURL_VERSION_MINOR == 55 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 55 
#define CURLOPT_REQUEST_TARGET 0
#define CURLOPT_SOCKS5_AUTH 0
#define CURLINFO_SIZE_UPLOAD_T 0
#define CURLINFO_SIZE_DOWNLOAD_T 0
#define CURLINFO_SPEED_DOWNLOAD_T 0
#define CURLINFO_SPEED_UPLOAD_T 0
#define CURLINFO_CONTENT_LENGTH_DOWNLOAD_T 0
#define CURLINFO_CONTENT_LENGTH_UPLOAD_T 0
#define CURLAUTH_GSSAPI 0
#if (LIBCURL_VERSION_MINOR == 54 && LIBCURL_VERSION_PATCH < 1) || LIBCURL_VERSION_MINOR < 54 
#if (LIBCURL_VERSION_MINOR == 54 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 54 
#define CURLOPT_SUPPRESS_CONNECT_HEADERS 0
#if (LIBCURL_VERSION_MINOR == 53 && LIBCURL_VERSION_PATCH < 1) || LIBCURL_VERSION_MINOR < 53 
#if (LIBCURL_VERSION_MINOR == 53 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 53 
#define CURLOPT_ABSTRACT_UNIX_SOCKET 0
#if (LIBCURL_VERSION_MINOR == 52 && LIBCURL_VERSION_PATCH < 1) || LIBCURL_VERSION_MINOR < 52 
#if (LIBCURL_VERSION_MINOR == 52 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 52 
#define CURLOPT_PROXY_CAINFO 0
#define CURLOPT_PROXY_CAPATH 0
#define CURLOPT_PROXY_SSL_VERIFYPEER 0
#define CURLOPT_PROXY_SSL_VERIFYHOST 0
#define CURLOPT_PROXY_SSLVERSION 0
#define CURLOPT_PROXY_TLSAUTH_USERNAME 0
#define CURLOPT_PROXY_TLSAUTH_PASSWORD 0
#define CURLOPT_PROXY_TLSAUTH_TYPE 0
#define CURLOPT_PROXY_SSLCERT 0
#define CURLOPT_PROXY_SSLCERTTYPE 0
#define CURLOPT_PROXY_SSLKEY 0
#define CURLOPT_PROXY_SSLKEYTYPE 0
#define CURLOPT_PROXY_KEYPASSWD 0
#define CURLOPT_PROXY_SSL_CIPHER_LIST 0
#define CURLOPT_PROXY_CRLFILE 0
#define CURLOPT_PROXY_SSL_OPTIONS 0
#define CURLOPT_PRE_PROXY 0
#define CURLOPT_PROXY_PINNEDPUBLICKEY 0
#define CURLINFO_PROXY_SSL_VERIFYRESULT 0
#define CURLINFO_PROTOCOL 0
#define CURLINFO_SCHEME 0
#define CURL_VERSION_HTTPS_PROXY 0
#if (LIBCURL_VERSION_MINOR == 51 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 51 
#define CURLOPT_KEEP_SENDING_ON_ERROR 0
#if (LIBCURL_VERSION_MINOR == 50 && LIBCURL_VERSION_PATCH < 3) || LIBCURL_VERSION_MINOR < 50 
#define CURLE_WEIRD_SERVER_REPLY -1
#if (LIBCURL_VERSION_MINOR == 50 && LIBCURL_VERSION_PATCH < 2) || LIBCURL_VERSION_MINOR < 50 
#if (LIBCURL_VERSION_MINOR == 50 && LIBCURL_VERSION_PATCH < 1) || LIBCURL_VERSION_MINOR < 50 
#if (LIBCURL_VERSION_MINOR == 50 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 50 
#define CURLINFO_HTTP_VERSION 0
#if (LIBCURL_VERSION_MINOR == 49 && LIBCURL_VERSION_PATCH < 1) || LIBCURL_VERSION_MINOR < 49 
#if (LIBCURL_VERSION_MINOR == 49 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 49 
#define CURLOPT_CONNECT_TO 0
#define CURLOPT_TCP_FASTOPEN 0
#define CURLE_TOO_MANY_REDIRECTS -1
#define CURLE_TELNET_OPTION_SYNTAX -1
#define CURLE_HTTP2_STREAM -1
#if (LIBCURL_VERSION_MINOR == 48 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 48 
#define CURLOPT_TFTP_NO_OPTIONS 0
#define CURLINFO_TLS_SSL_PTR 0
#if (LIBCURL_VERSION_MINOR == 47 && LIBCURL_VERSION_PATCH < 1) || LIBCURL_VERSION_MINOR < 47 
#if (LIBCURL_VERSION_MINOR == 47 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 47 
#define CURL_VERSION_PSL 0
#if (LIBCURL_VERSION_MINOR == 46 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 46 
#define CURLOPT_STREAM_WEIGHT 0
#define CURLOPT_STREAM_DEPENDS 0
#define CURLOPT_STREAM_DEPENDS_E 0
#if (LIBCURL_VERSION_MINOR == 45 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 45 
#define CURLOPT_DEFAULT_PROTOCOL 0
#define CURLINFO_ACTIVESOCKET 0
#if (LIBCURL_VERSION_MINOR == 44 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 44 
#if (LIBCURL_VERSION_MINOR == 43 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 43 
#define CURLOPT_PROXY_SERVICE_NAME 0
#define CURLOPT_SERVICE_NAME 0
#define CURLOPT_PIPEWAIT 0
#if (LIBCURL_VERSION_MINOR == 42 && LIBCURL_VERSION_PATCH < 1) || LIBCURL_VERSION_MINOR < 42 
#if (LIBCURL_VERSION_MINOR == 42 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 42 
#define CURLOPT_SSL_FALSESTART 0
#define CURLOPT_PATH_AS_IS 0
#if (LIBCURL_VERSION_MINOR == 41 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 41 
#define CURLOPT_SSL_VERIFYSTATUS 0
#define CURLE_SSL_INVALIDCERTSTATUS -1
#if (LIBCURL_VERSION_MINOR == 40 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 40 
#define CURLOPT_UNIX_SOCKET_PATH 0
#define CURL_VERSION_KERBEROS5 0
#define CURL_VERSION_UNIX_SOCKETS 0
#if (LIBCURL_VERSION_MINOR == 39 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 39 
#define CURLOPT_PINNEDPUBLICKEY 0
#define CURLE_SSL_PINNEDPUBKEYNOTMATCH -1
#if (LIBCURL_VERSION_MINOR == 38 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 38 
#define CURLE_HTTP2 -1
#define CURL_VERSION_GSSAPI 0
#define CURLAUTH_NEGOTIATE 0
#if (LIBCURL_VERSION_MINOR == 37 && LIBCURL_VERSION_PATCH < 1) || LIBCURL_VERSION_MINOR < 37 
#define CURLOPT_OBSOLETE40 0
#define CURLOPT_OBSOLETE72 0
#if (LIBCURL_VERSION_MINOR == 37 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 37 
#define CURLOPT_PROXYHEADER 0
#define CURLOPT_HEADEROPT 0
#if (LIBCURL_VERSION_MINOR == 36 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 36 
#define CURLOPT_SSL_ENABLE_NPN 0
#define CURLOPT_SSL_ENABLE_ALPN 0
#define CURLOPT_EXPECT_100_TIMEOUT_MS 0
#if (LIBCURL_VERSION_MINOR == 35 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 35 
#if (LIBCURL_VERSION_MINOR == 34 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 34 
#define CURLOPT_LOGIN_OPTIONS 0
#define CURLINFO_TLS_SESSION 0
#if (LIBCURL_VERSION_MINOR == 33 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 33 
#define CURLOPT_XOAUTH2_BEARER 0
#define CURLOPT_DNS_INTERFACE 0
#define CURLOPT_DNS_LOCAL_IP4 0
#define CURLOPT_DNS_LOCAL_IP6 0
#define CURL_VERSION_HTTP2 0
#if (LIBCURL_VERSION_MINOR == 32 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 32 
#define CURLOPT_XFERINFODATA 0
#define CURLOPT_XFERINFOFUNCTION 0
#if (LIBCURL_VERSION_MINOR == 31 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 31 
#define CURLOPT_SASL_IR 0
#if (LIBCURL_VERSION_MINOR == 30 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 30 
#define CURLE_NO_CONNECTION_AVAILABLE -1
#if (LIBCURL_VERSION_MINOR == 29 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 29 
#if (LIBCURL_VERSION_MINOR == 28 && LIBCURL_VERSION_PATCH < 1) || LIBCURL_VERSION_MINOR < 28 
#if (LIBCURL_VERSION_MINOR == 28 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 28 
#if (LIBCURL_VERSION_MINOR == 27 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 27 
#if (LIBCURL_VERSION_MINOR == 26 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 26 
#if (LIBCURL_VERSION_MINOR == 25 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 25 
#define CURLOPT_TCP_KEEPALIVE 0
#define CURLOPT_TCP_KEEPIDLE 0
#define CURLOPT_TCP_KEEPINTVL 0
#define CURLOPT_SSL_OPTIONS 0
#define CURLOPT_MAIL_AUTH 0
#if (LIBCURL_VERSION_MINOR == 24 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 24 
#define CURLOPT_DNS_SERVERS 0
#define CURLOPT_ACCEPTTIMEOUT_MS 0
#define CURLE_FTP_ACCEPT_FAILED -1
#define CURLE_FTP_ACCEPT_TIMEOUT -1
#if (LIBCURL_VERSION_MINOR == 23 && LIBCURL_VERSION_PATCH < 1) || LIBCURL_VERSION_MINOR < 23 
#if (LIBCURL_VERSION_MINOR == 23 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 23 
#if (LIBCURL_VERSION_MINOR == 22 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 22 
#define CURLOPT_GSSAPI_DELEGATION 0
#define CURL_VERSION_NTLM_WB 0
#define CURLAUTH_NTLM_WB 0
#if (LIBCURL_VERSION_MINOR == 21 && LIBCURL_VERSION_PATCH < 7) || LIBCURL_VERSION_MINOR < 21 
#define CURLOPT_CLOSESOCKETFUNCTION 0
#define CURLOPT_CLOSESOCKETDATA 0
#if (LIBCURL_VERSION_MINOR == 21 && LIBCURL_VERSION_PATCH < 6) || LIBCURL_VERSION_MINOR < 21 
#define CURLOPT_ACCEPT_ENCODING 0
#define CURLOPT_TRANSFER_ENCODING 0
#if (LIBCURL_VERSION_MINOR == 21 && LIBCURL_VERSION_PATCH < 5) || LIBCURL_VERSION_MINOR < 21 
#define CURLE_NOT_BUILT_IN -1
#define CURLE_UNKNOWN_OPTION -1
#if (LIBCURL_VERSION_MINOR == 21 && LIBCURL_VERSION_PATCH < 4) || LIBCURL_VERSION_MINOR < 21 
#define CURLOPT_TLSAUTH_USERNAME 0
#define CURLOPT_TLSAUTH_PASSWORD 0
#define CURLOPT_TLSAUTH_TYPE 0
#define CURL_VERSION_TLSAUTH_SRP 0
#if (LIBCURL_VERSION_MINOR == 21 && LIBCURL_VERSION_PATCH < 3) || LIBCURL_VERSION_MINOR < 21 
#define CURLOPT_RESOLVE 0
#define CURLAUTH_ONLY 0
#if (LIBCURL_VERSION_MINOR == 21 && LIBCURL_VERSION_PATCH < 2) || LIBCURL_VERSION_MINOR < 21 
#if (LIBCURL_VERSION_MINOR == 21 && LIBCURL_VERSION_PATCH < 1) || LIBCURL_VERSION_MINOR < 21 
#if (LIBCURL_VERSION_MINOR == 21 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 21 
#define CURLOPT_WILDCARDMATCH 0
#define CURLOPT_CHUNK_BGN_FUNCTION 0
#define CURLOPT_CHUNK_END_FUNCTION 0
#define CURLOPT_FNMATCH_FUNCTION 0
#define CURLOPT_CHUNK_DATA 0
#define CURLOPT_FNMATCH_DATA 0
#define CURLE_FTP_BAD_FILE_LIST -1
#define CURLE_CHUNK_FAILED -1
#define CURLINFO_PRIMARY_PORT 0
#define CURLINFO_LOCAL_IP 0
#define CURLINFO_LOCAL_PORT 0
#if (LIBCURL_VERSION_MINOR == 20 && LIBCURL_VERSION_PATCH < 1) || LIBCURL_VERSION_MINOR < 20 
#if (LIBCURL_VERSION_MINOR == 20 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 20 
#define CURLOPT_SERVER_RESPONSE_TIMEOUT 0
#define CURLOPT_MAIL_FROM 0
#define CURLOPT_MAIL_RCPT 0
#define CURLOPT_FTP_USE_PRET 0
#define CURLOPT_RTSP_REQUEST 0
#define CURLOPT_RTSP_SESSION_ID 0
#define CURLOPT_RTSP_STREAM_URI 0
#define CURLOPT_RTSP_TRANSPORT 0
#define CURLOPT_RTSP_CLIENT_CSEQ 0
#define CURLOPT_RTSP_SERVER_CSEQ 0
#define CURLOPT_INTERLEAVEDATA 0
#define CURLOPT_INTERLEAVEFUNCTION 0
#define CURLOPT_RTSPHEADER 0
#define CURLE_FTP_PRET_FAILED -1
#define CURLE_RTSP_CSEQ_ERROR -1
#define CURLE_RTSP_SESSION_ERROR -1
#define CURLINFO_RTSP_SESSION_ID 0
#define CURLINFO_RTSP_CLIENT_CSEQ 0
#define CURLINFO_RTSP_SERVER_CSEQ 0
#define CURLINFO_RTSP_CSEQ_RECV 0
#if (LIBCURL_VERSION_MINOR == 19 && LIBCURL_VERSION_PATCH < 7) || LIBCURL_VERSION_MINOR < 19 
#if (LIBCURL_VERSION_MINOR == 19 && LIBCURL_VERSION_PATCH < 6) || LIBCURL_VERSION_MINOR < 19 
#define CURLOPT_SSH_KNOWNHOSTS 0
#define CURLOPT_SSH_KEYFUNCTION 0
#define CURLOPT_SSH_KEYDATA 0
#define CURL_VERSION_CURLDEBUG 0
#if (LIBCURL_VERSION_MINOR == 19 && LIBCURL_VERSION_PATCH < 5) || LIBCURL_VERSION_MINOR < 19 
#if (LIBCURL_VERSION_MINOR == 19 && LIBCURL_VERSION_PATCH < 4) || LIBCURL_VERSION_MINOR < 19 
#define CURLOPT_NOPROXY 0
#define CURLOPT_TFTP_BLKSIZE 0
#define CURLOPT_SOCKS5_GSSAPI_SERVICE 0
#define CURLOPT_SOCKS5_GSSAPI_NEC 0
#define CURLOPT_PROTOCOLS 0
#define CURLOPT_REDIR_PROTOCOLS 0
#define CURLINFO_CONDITION_UNMET 0
#if (LIBCURL_VERSION_MINOR == 19 && LIBCURL_VERSION_PATCH < 3) || LIBCURL_VERSION_MINOR < 19 
#define CURLAUTH_DIGEST_IE 0
#if (LIBCURL_VERSION_MINOR == 19 && LIBCURL_VERSION_PATCH < 2) || LIBCURL_VERSION_MINOR < 19 
#if (LIBCURL_VERSION_MINOR == 19 && LIBCURL_VERSION_PATCH < 1) || LIBCURL_VERSION_MINOR < 19 
#define CURLOPT_POSTREDIR 0
#define CURLOPT_CERTINFO 0
#define CURLOPT_USERNAME 0
#define CURLOPT_PASSWORD 0
#define CURLOPT_PROXYUSERNAME 0
#define CURLOPT_PROXYPASSWORD 0
#define CURLINFO_CERTINFO 0
#if (LIBCURL_VERSION_MINOR == 19 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 19 
#define CURLOPT_CRLFILE 0
#define CURLOPT_ISSUERCERT 0
#define CURLOPT_ADDRESS_SCOPE 0
#define CURLE_SSL_CRL_BADFILE -1
#define CURLE_SSL_ISSUER_ERROR -1
#define CURLINFO_PRIMARY_IP 0
#define CURLINFO_APPCONNECT_TIME 0
#if (LIBCURL_VERSION_MINOR == 18 && LIBCURL_VERSION_PATCH < 2) || LIBCURL_VERSION_MINOR < 18 
#define CURLE_AGAIN -1
#define CURLINFO_REDIRECT_URL 0
#if (LIBCURL_VERSION_MINOR == 18 && LIBCURL_VERSION_PATCH < 1) || LIBCURL_VERSION_MINOR < 18 
#if (LIBCURL_VERSION_MINOR == 18 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 18 
#define CURLOPT_PROXY_TRANSFER_MODE 0
#define CURLOPT_SEEKFUNCTION 0
#define CURLOPT_SEEKDATA 0
#if (LIBCURL_VERSION_MINOR == 17 && LIBCURL_VERSION_PATCH < 1) || LIBCURL_VERSION_MINOR < 17 
#define CURLOPT_POST301 0
#define CURLOPT_SSH_HOST_PUBLIC_KEY_MD5 0
#define CURLOPT_OPENSOCKETFUNCTION 0
#define CURLOPT_OPENSOCKETDATA 0
#define CURLOPT_COPYPOSTFIELDS 0
#define CURLE_PEER_FAILED_VERIFICATION -1
#if (LIBCURL_VERSION_MINOR == 17 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 17 
#define CURLOPT_LOW_SPEED_LIMIT 0
#define CURLOPT_KEYPASSWD 0
#define CURLOPT_DIRLISTONLY 0
#define CURLOPT_APPEND 0
#define CURLOPT_FTP_RESPONSE_TIMEOUT 0
#define CURLOPT_USE_SSL 0
#define CURLE_OBSOLETE4 -1
#define CURLE_REMOTE_ACCESS_DENIED -1
#define CURLE_OBSOLETE10 -1
#define CURLE_OBSOLETE12 -1
#define CURLE_OBSOLETE16 -1
#define CURLE_FTP_COULDNT_SET_TYPE -1
#define CURLE_OBSOLETE20 -1
#define CURLE_QUOTE_ERROR -1
#define CURLE_OBSOLETE24 -1
#define CURLE_OBSOLETE29 -1
#define CURLE_OBSOLETE32 -1
#define CURLE_RANGE_ERROR -1
#define CURLE_OBSOLETE40 -1
#define CURLE_OBSOLETE44 -1
#define CURLE_OBSOLETE46 -1
#define CURLE_OBSOLETE50 -1
#define CURLE_OBSOLETE57 -1
#define CURLE_USE_SSL_FAILED -1
#define CURLE_REMOTE_DISK_FULL -1
#define CURLE_REMOTE_FILE_EXISTS -1
#if (LIBCURL_VERSION_MINOR == 16 && LIBCURL_VERSION_PATCH < 4) || LIBCURL_VERSION_MINOR < 16 
#define CURLOPT_KRBLEVEL 0
#define CURLOPT_NEW_FILE_PERMS 0
#define CURLOPT_NEW_DIRECTORY_PERMS 0
#if (LIBCURL_VERSION_MINOR == 16 && LIBCURL_VERSION_PATCH < 3) || LIBCURL_VERSION_MINOR < 16 
#define CURLE_UPLOAD_FAILED -1
#if (LIBCURL_VERSION_MINOR == 16 && LIBCURL_VERSION_PATCH < 2) || LIBCURL_VERSION_MINOR < 16 
#define CURLOPT_TIMEOUT_MS 0
#define CURLOPT_CONNECTTIMEOUT_MS 0
#define CURLOPT_HTTP_TRANSFER_DECODING 0
#define CURLOPT_HTTP_CONTENT_DECODING 0
#if (LIBCURL_VERSION_MINOR == 16 && LIBCURL_VERSION_PATCH < 1) || LIBCURL_VERSION_MINOR < 16 
#define CURLOPT_SSH_AUTH_TYPES 0
#define CURLOPT_SSH_PUBLIC_KEYFILE 0
#define CURLOPT_SSH_PRIVATE_KEYFILE 0
#define CURLOPT_FTP_SSL_CCC 0
#define CURLE_REMOTE_FILE_NOT_FOUND -1
#define CURLE_SSH -1
#define CURLE_SSL_SHUTDOWN_FAILED -1
#if (LIBCURL_VERSION_MINOR == 16 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 16 
#define CURLOPT_SOCKOPTFUNCTION 0
#define CURLOPT_SOCKOPTDATA 0
#define CURLOPT_SSL_SESSIONID_CACHE 0
#define CURLE_SSL_CACERT_BADFILE -1
#if (LIBCURL_VERSION_MINOR == 15 && LIBCURL_VERSION_PATCH < 5) || LIBCURL_VERSION_MINOR < 15 
#define CURLOPT_MAX_SEND_SPEED_LARGE 0
#define CURLOPT_MAX_RECV_SPEED_LARGE 0
#define CURLOPT_FTP_ALTERNATIVE_TO_USER 0
#if (LIBCURL_VERSION_MINOR == 15 && LIBCURL_VERSION_PATCH < 4) || LIBCURL_VERSION_MINOR < 15 
#define CURLOPT_CONV_FROM_NETWORK_FUNCTION 0
#define CURLOPT_CONV_TO_NETWORK_FUNCTION 0
#define CURLOPT_CONV_FROM_UTF8_FUNCTION 0
#define CURLE_CONV_FAILED -1
#define CURLE_CONV_REQD -1
#define CURLINFO_FTP_ENTRY_PATH 0
#define CURL_VERSION_CONV 0
#if (LIBCURL_VERSION_MINOR == 15 && LIBCURL_VERSION_PATCH < 3) || LIBCURL_VERSION_MINOR < 15 
#if (LIBCURL_VERSION_MINOR == 15 && LIBCURL_VERSION_PATCH < 2) || LIBCURL_VERSION_MINOR < 15 
#define CURLOPT_LOCALPORT 0
#define CURLOPT_LOCALPORTRANGE 0
#define CURLOPT_CONNECT_ONLY 0
#define CURLINFO_LASTSOCKET 0
#if (LIBCURL_VERSION_MINOR == 15 && LIBCURL_VERSION_PATCH < 1) || LIBCURL_VERSION_MINOR < 15 
#define CURLOPT_FTP_FILEMETHOD 0
#if (LIBCURL_VERSION_MINOR == 15 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 15 
#define CURLOPT_FTP_SKIP_PASV_IP 0
#define CURLE_TFTP_NOTFOUND -1
#define CURLE_TFTP_PERM -1
#define CURLE_TFTP_DISKFULL -1
#define CURLE_TFTP_ILLEGAL -1
#define CURLE_TFTP_UNKNOWNID -1
#define CURLE_TFTP_EXISTS -1
#define CURLE_TFTP_NOSUCHUSER -1
#if (LIBCURL_VERSION_MINOR == 14 && LIBCURL_VERSION_PATCH < 1) || LIBCURL_VERSION_MINOR < 14 
#define CURLOPT_COOKIELIST 0
#define CURLOPT_IGNORE_CONTENT_LENGTH 0
#define CURLINFO_COOKIELIST 0
#if (LIBCURL_VERSION_MINOR == 14 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 14 
#if (LIBCURL_VERSION_MINOR == 13 && LIBCURL_VERSION_PATCH < 2) || LIBCURL_VERSION_MINOR < 13 
#define CURL_VERSION_SSPI 0
#if (LIBCURL_VERSION_MINOR == 13 && LIBCURL_VERSION_PATCH < 1) || LIBCURL_VERSION_MINOR < 13 
#define CURLE_LOGIN_DENIED -1
#if (LIBCURL_VERSION_MINOR == 13 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 13 
#define CURLOPT_SOURCE_URL 0
#define CURLOPT_SOURCE_QUOTE 0
#define CURLOPT_FTP_ACCOUNT 0
#if (LIBCURL_VERSION_MINOR == 12 && LIBCURL_VERSION_PATCH < 3) || LIBCURL_VERSION_MINOR < 12 
#define CURLOPT_IOCTLFUNCTION 0
#define CURLOPT_IOCTLDATA 0
#define CURLE_SEND_FAIL_REWIND -1
#define CURLE_SSL_ENGINE_INITFAILED -1
#define CURLINFO_NUM_CONNECTS 0
#define CURLINFO_SSL_ENGINES 0
#if (LIBCURL_VERSION_MINOR == 12 && LIBCURL_VERSION_PATCH < 2) || LIBCURL_VERSION_MINOR < 12 
#define CURLOPT_FTPSSLAUTH 0
#define CURLINFO_OS_ERRNO 0
#if (LIBCURL_VERSION_MINOR == 12 && LIBCURL_VERSION_PATCH < 1) || LIBCURL_VERSION_MINOR < 12 
#define CURLOPT_SOURCE_HOST 0
#define CURLOPT_SOURCE_USERPWD 0
#define CURLOPT_SOURCE_PATH 0
#define CURLOPT_SOURCE_PORT 0
#define CURLOPT_PASV_HOST 0
#define CURLOPT_SOURCE_PREQUOTE 0
#define CURLOPT_SOURCE_POSTQUOTE 0
#if (LIBCURL_VERSION_MINOR == 12 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 12 
#define CURLE_INTERFACE_FAILED -1
#define CURL_VERSION_IDN 0
#if (LIBCURL_VERSION_MINOR == 11 && LIBCURL_VERSION_PATCH < 2) || LIBCURL_VERSION_MINOR < 11 
#define CURLOPT_TCP_NODELAY 0
#if (LIBCURL_VERSION_MINOR == 11 && LIBCURL_VERSION_PATCH < 1) || LIBCURL_VERSION_MINOR < 11 
#define CURLOPT_POSTFIELDSIZE_LARGE 0
#define CURL_VERSION_LARGEFILE 0
#if (LIBCURL_VERSION_MINOR == 11 && LIBCURL_VERSION_PATCH < 0) || LIBCURL_VERSION_MINOR < 11 
#define CURLOPT_INFILESIZE_LARGE 0
#define CURLOPT_RESUME_FROM_LARGE 0
#define CURLOPT_MAXFILESIZE_LARGE 0
#define CURLOPT_NETRC_FILE 0
#define CURLOPT_FTP_SSL 0
#define CURLE_FTP_SSL_FAILED -1
#if (LIBCURL_VERSION_MINOR == 10 && LIBCURL_VERSION_PATCH < 8) || LIBCURL_VERSION_MINOR < 10 
#define CURLOPT_IPRESOLVE 0
#define CURLOPT_MAXFILESIZE 0
#define CURLE_LDAP_INVALID_URL -1
#define CURLE_FILESIZE_EXCEEDED -1
#define CURLINFO_RESPONSE_CODE 0
#define CURLINFO_HTTPAUTH_AVAIL 0
#define CURLINFO_PROXYAUTH_AVAIL 0
#define CURL_VERSION_SPNEGO 0
#if (LIBCURL_VERSION_MINOR == 10 && LIBCURL_VERSION_PATCH < 7) || LIBCURL_VERSION_MINOR < 10 
#define CURLOPT_FTP_CREATE_MISSING_DIRS 0
#define CURLOPT_PROXYAUTH 0
#define CURLINFO_HTTP_CONNECTCODE 0
#define CURL_VERSION_ASYNCHDNS 0
#if (LIBCURL_VERSION_MINOR == 10 && LIBCURL_VERSION_PATCH < 6) || LIBCURL_VERSION_MINOR < 10 
#define CURLOPT_HTTPAUTH 0
#define CURLOPT_SSL_CTX_FUNCTION 0
#define CURLOPT_SSL_CTX_DATA 0
#define CURL_VERSION_NTLM 0
#define CURL_VERSION_GSSNEGOTIATE 0
#define CURL_VERSION_DEBUG 0
#define CURLAUTH_NONE 0
#define CURLAUTH_BASIC 0
#define CURLAUTH_DIGEST 0
#define CURLAUTH_GSSNEGOTIATE 0
#define CURLAUTH_NTLM 0
#define CURLAUTH_ANY 0
#define CURLAUTH_ANYSAFE 0
#if (LIBCURL_VERSION_MINOR == 10 && LIBCURL_VERSION_PATCH < 5) || LIBCURL_VERSION_MINOR < 10 
#define CURLOPT_FTP_USE_EPRT 0
#if (LIBCURL_VERSION_MINOR == 10 && LIBCURL_VERSION_PATCH < 4) || LIBCURL_VERSION_MINOR < 10 
#define CURLOPT_UNRESTRICTED_AUTH 0
#if (LIBCURL_VERSION_MINOR == 10 && LIBCURL_VERSION_PATCH < 3) || LIBCURL_VERSION_MINOR < 10 
#define CURLOPT_PRIVATE 0
#define CURLOPT_HTTP200ALIASES 0
#define CURLE_HTTP_RETURNED_ERROR -1
#define CURLINFO_PRIVATE 0
#if (LIBCURL_VERSION_MINOR == 10 && LIBCURL_VERSION_PATCH < 2) || LIBCURL_VERSION_MINOR < 10 
#define CURLE_OPERATION_TIMEDOUT -1
#if (LIBCURL_VERSION_MINOR == 10 && LIBCURL_VERSION_PATCH < 1) || LIBCURL_VERSION_MINOR < 10 
#error your version is TOOOOOOOO low
#endif /* 7.10.1 */
#endif /* 7.10.2 */
#endif /* 7.10.3 */
#endif /* 7.10.4 */
#endif /* 7.10.5 */
#endif /* 7.10.6 */
#endif /* 7.10.7 */
#endif /* 7.10.8 */
#endif /* 7.11.0 */
#endif /* 7.11.1 */
#endif /* 7.11.2 */
#endif /* 7.12.0 */
#endif /* 7.12.1 */
#endif /* 7.12.2 */
#endif /* 7.12.3 */
#endif /* 7.13.0 */
#endif /* 7.13.1 */
#endif /* 7.13.2 */
#endif /* 7.14.0 */
#endif /* 7.14.1 */
#endif /* 7.15.0 */
#endif /* 7.15.1 */
#endif /* 7.15.2 */
#endif /* 7.15.3 */
#endif /* 7.15.4 */
#endif /* 7.15.5 */
#endif /* 7.16.0 */
#endif /* 7.16.1 */
#endif /* 7.16.2 */
#endif /* 7.16.3 */
#endif /* 7.16.4 */
#endif /* 7.17.0 */
#endif /* 7.17.1 */
#endif /* 7.18.0 */
#endif /* 7.18.1 */
#endif /* 7.18.2 */
#endif /* 7.19.0 */
#endif /* 7.19.1 */
#endif /* 7.19.2 */
#endif /* 7.19.3 */
#endif /* 7.19.4 */
#endif /* 7.19.5 */
#endif /* 7.19.6 */
#endif /* 7.19.7 */
#endif /* 7.20.0 */
#endif /* 7.20.1 */
#endif /* 7.21.0 */
#endif /* 7.21.1 */
#endif /* 7.21.2 */
#endif /* 7.21.3 */
#endif /* 7.21.4 */
#endif /* 7.21.5 */
#endif /* 7.21.6 */
#endif /* 7.21.7 */
#endif /* 7.22.0 */
#endif /* 7.23.0 */
#endif /* 7.23.1 */
#endif /* 7.24.0 */
#endif /* 7.25.0 */
#endif /* 7.26.0 */
#endif /* 7.27.0 */
#endif /* 7.28.0 */
#endif /* 7.28.1 */
#endif /* 7.29.0 */
#endif /* 7.30.0 */
#endif /* 7.31.0 */
#endif /* 7.32.0 */
#endif /* 7.33.0 */
#endif /* 7.34.0 */
#endif /* 7.35.0 */
#endif /* 7.36.0 */
#endif /* 7.37.0 */
#endif /* 7.37.1 */
#endif /* 7.38.0 */
#endif /* 7.39.0 */
#endif /* 7.40.0 */
#endif /* 7.41.0 */
#endif /* 7.42.0 */
#endif /* 7.42.1 */
#endif /* 7.43.0 */
#endif /* 7.44.0 */
#endif /* 7.45.0 */
#endif /* 7.46.0 */
#endif /* 7.47.0 */
#endif /* 7.47.1 */
#endif /* 7.48.0 */
#endif /* 7.49.0 */
#endif /* 7.49.1 */
#endif /* 7.50.0 */
#endif /* 7.50.1 */
#endif /* 7.50.2 */
#endif /* 7.50.3 */
#endif /* 7.51.0 */
#endif /* 7.52.0 */
#endif /* 7.52.1 */
#endif /* 7.53.0 */
#endif /* 7.53.1 */
#endif /* 7.54.0 */
#endif /* 7.54.1 */
#endif /* 7.55.0 */
#endif /* 7.55.1 */
#endif /* 7.56.0 */
#endif /* 7.56.1 */
#endif /* 7.57.0 */
#endif /* 7.58.0 */
#endif /* 7.59.0 */
#endif /* 7.60.0 */
#endif /* 7.61.0 */
#endif /* 7.61.1 */
#endif /* 7.62.0 */
#endif /* 7.63.0 */
#endif /* 7.64.0 */
#endif /* 7.64.1 */
#endif /* 7.65.0 */
#endif /* 7.65.1 */
#endif /* 7.65.2 */
#endif /* 7.65.3 */
#endif /* 7.66.0 */
#endif /* 7.67.0 */
#endif /* 7.68.0 */
#endif /* 7.69.0 */
#endif /* 7.69.1 */
#endif /* 7.70.0 */
/* generated ends */
