#include<stdio.h>

/**
 * myStartupFun - Apply the constructor attribute
 */
void fun(void) __attribute__ ((constructor));

/**
 * fun - implementation of fun
 */
void fun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
