# buffer_overflow_test
This project attempts to analyze and validate buffer overlow vulnerabilities in modern GCC, such as through stack-smashing.

shellcode.c
------------
Contains C-code to spawn a root shell whose assembly instructions will be extracted and loaded into the stack of the vulnerable code to attempt a stack-smash attack to hopefully run a root shell from a non-root program execution.
