# EvalExpr

# TRACE :

# = Host-specific information ====================================================

$> hostname; uname -msr
e1r10p20.42.fr
Darwin 15.6.0 x86_64
$> date
Mon Aug 28 16:50:44 CEST 2017
$> gcc --version
Configured with: --prefix=/Applications/Xcode.app/Contents/Developer/usr --with-gxx-include-dir=/usr/include/c++/4.2.1
Apple LLVM version 8.0.0 (clang-800.0.42.1)
Target: x86_64-apple-darwin15.6.0
Thread model: posix
InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin
$> clang --version
Apple LLVM version 8.0.0 (clang-800.0.42.1)
Target: x86_64-apple-darwin15.6.0
Thread model: posix
InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin

= User files collection ========================================================
Collecting user files from Vogsphere
Repository URL: intra/2017/activities/piscine_c_evalexpr/moana

= Git history ==================================================================
$> git -C /var/folders/15/v_gx4xh508sg42qc9cc3vxsw0000gq/T/tmpcXGIwL/user log --pretty='%H - %an, %ad : %s'
c243cd84527eaa388182791d5f0c3b7b5f476032 - Matei OANA, Sun Aug 27 23:15:56 2017 +0300 : Domne ajuta EvalExpr

= Collected files ==========================================
$> ls -lAR /var/folders/15/v_gx4xh508sg42qc9cc3vxsw0000gq/T/tmpcXGIwL/user
total 8
-rw-r--r--   1 deepthought  deepthought  1366 Aug 28 16:50 __GIT_HISTORY
drwxr-xr-x  22 deepthought  deepthought   748 Aug 28 16:50 ex00

/var/folders/15/v_gx4xh508sg42qc9cc3vxsw0000gq/T/tmpcXGIwL/user/ex00:
total 176
-rw-r--r--  1 deepthought  deepthought  8196 Aug 28 16:50 .DS_Store
-rw-r--r--  1 deepthought  deepthought  4096 Aug 28 16:50 ._.DS_Store
-rw-r--r--  1 deepthought  deepthought  4096 Aug 28 16:50 ._Makefile
-rw-r--r--  1 deepthought  deepthought  4096 Aug 28 16:50 ._ft_eval_expr.c
-rw-r--r--  1 deepthought  deepthought  4096 Aug 28 16:50 ._ft_putchar.c
-rw-r--r--  1 deepthought  deepthought  4096 Aug 28 16:50 ._functions.h
-rw-r--r--  1 deepthought  deepthought  4096 Aug 28 16:50 ._main.c
-rw-r--r--  1 deepthought  deepthought  4096 Aug 28 16:50 ._operatii_principale.c
-rw-r--r--  1 deepthought  deepthought  4096 Aug 28 16:50 ._operatii_secundare.c
-rw-r--r--  1 deepthought  deepthought  4096 Aug 28 16:50 ._validare.c
-rw-r--r--  1 deepthought  deepthought  4096 Aug 28 16:50 ._verificare.c
-rw-r--r--  1 deepthought  deepthought  1080 Aug 28 16:50 Makefile
-rw-r--r--  1 deepthought  deepthought  1020 Aug 28 16:50 ft_eval_expr.c
-rw-r--r--  1 deepthought  deepthought  1213 Aug 28 16:50 ft_putchar.c
-rw-r--r--  1 deepthought  deepthought  1208 Aug 28 16:50 functions.h
-rw-r--r--  1 deepthought  deepthought  1031 Aug 28 16:50 main.c
-rw-r--r--  1 deepthought  deepthought  1210 Aug 28 16:50 operatii_principale.c
-rw-r--r--  1 deepthought  deepthought  1138 Aug 28 16:50 operatii_secundare.c
-rw-r--r--  1 deepthought  deepthought  1275 Aug 28 16:50 validare.c
-rw-r--r--  1 deepthought  deepthought  1308 Aug 28 16:50 verificare.c

= ex00 =========================================================================
$> /usr/bin/norminette  operatii_secundare.c functions.h ft_eval_expr.c verificare.c operatii_principale.c main.c ft_putchar.c validare.c | grep -E '^(Error|Warning)'

$> make && ls -la eval_expr
gcc -c -Wall -Werror -Wextra *.c
gcc -o eval_expr -Wall -Werror -Wextra *.o
-rwxr-xr-x  1 deepthought  deepthought  9024 Aug 28 16:50 eval_expr

= Test 1 ===================================================
$> ./oyqjv1kz7qnisxvuwjc6ajbf "20 + 34"
$> diff -U 3 user_output_test1 test1.output | cat -e

Diff OK :D
OK, incrementing grade by 5
= Test 2 ===================================================
$> ./g14mhw60959gifsl2h8yx3zo "33 - 6 * 52 % 42"
$> diff -U 3 user_output_test2 test2.output | cat -e

Diff OK :D
OK, incrementing grade by 20
= Test 3 ===================================================
$> ./sdkctsu24xdrsemn3oklrw3j "70 - 82 * (19 - 21 / (85 - 98) - 64 % 73) + 8"
$> diff -U 3 user_output_test3 test3.output | cat -e

Diff OK :D
OK, incrementing grade by 10
= Test 4 ===================================================
$> ./hl4t9s5lsottoh4iz0hx6l6n "0"
$> diff -U 3 user_output_test4 test4.output | cat -e

Diff OK :D
OK, incrementing grade by 10
= Test 5 ===================================================
$> ./tff3kdj9vsppd539j589lbep "-95"
$> diff -U 3 user_output_test5 test5.output | cat -e

Diff OK :D
OK, incrementing grade by 20
= Test 6 ===================================================
$> ./8l2k8tuymw0i5lk81vgmulqh "64-46"
$> diff -U 3 user_output_test6 test6.output | cat -e

Diff OK :D
OK, incrementing grade by 10
= Test 7 ===================================================
$> ./qcrzl51eo5hexz2kzqpvcnjg "71+93/(81-87*(79+21)-37%26)+15"
$> diff -U 3 user_output_test7 test7.output | cat -e

Diff OK :D
OK, incrementing grade by 10
= Test 8 ===================================================
$> ./gewf93vwl9c25hlcod05ao03 "76      -24            *(-5-49*(23+48/64)+71/(-         84  -          69*32))"
$> diff -U 3 user_output_test8 test8.output | cat -e

Diff OK :D
OK, incrementing grade by 10
= Test 9 ===================================================
$> ./pihvox1btbor8cxbezjn625n "(((((((((-45)))))))))"
$> diff -U 3 user_output_test9 test9.output | cat -e

Diff OK :D
OK, incrementing grade by 5
All tests OK
Grade: 100

= Final grade: 100 =============================================================
