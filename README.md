# OSTEP-Chapter14

1. Segmentation fault (core dumped).

2. Program received signal SIGSEGV, Segmentation fault.
0x0000000000400546 in main ()
Missing separate debuginfos, use: yum debuginfo-install glibc-2.28-225.el8.x86_64

3. ==583001== Invalid read of size 4
==583001==    at 0x400546: main (in /home/jixian/OSTEP-Chapter14/null)
==583001==  Address 0x0 is not stack'd, malloc'd or (recently) free'd

This is because a null pointer points to the memory location 0x0.

4. gdb did not show anything. Valgrind shows  4 bytes in 1 blocks are definitely lost in loss record 1 of 1. 

5. Nothing happens when running it. 
   Valgrind shows Invalid write of size 4. 
   This program is not correct.

6. it runs and shows that the value of the first element is 3901.
   valgrind shows Invalid read of size 4.

7. it shows free(): invalid pointer when running it.
   valgrind shows Invalid free() / delete / delete[] / realloc()
