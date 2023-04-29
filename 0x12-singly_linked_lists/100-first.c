#include <stdio.h>

void __attribute__((constructor)) test(void);

/**
 * test - print a string before executing the main
*/

void test(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
