--- components/os_crypt/os_crypt_unittest.cc.orig	2019-04-08 08:32:50 UTC
+++ components/os_crypt/os_crypt_unittest.cc
@@ -18,7 +18,7 @@
 #include "components/os_crypt/os_crypt_mocker.h"
 #include "testing/gtest/include/gtest/gtest.h"
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
 #include "components/os_crypt/os_crypt_mocker_linux.h"
 #endif
 
