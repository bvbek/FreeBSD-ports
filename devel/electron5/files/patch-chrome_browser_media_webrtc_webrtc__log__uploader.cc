--- chrome/browser/media/webrtc/webrtc_log_uploader.cc.orig	2019-04-08 08:32:44 UTC
+++ chrome/browser/media/webrtc/webrtc_log_uploader.cc
@@ -391,6 +391,8 @@ void WebRtcLogUploader::SetupMultipart(
   const char product[] = "Chrome_Android";
 #elif defined(OS_CHROMEOS)
   const char product[] = "Chrome_ChromeOS";
+#elif defined(OS_FREEBSD)
+  const char product[] = "Chrome_FreeBSD";
 #else
 #error Platform not supported.
 #endif
