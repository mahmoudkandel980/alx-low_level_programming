#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
    char *x = "hello, world";
    char *y = "world";
    char *z;

    z = _strpbrk(x, y);
    
    printf("%s\n", z);
    
    return (0);
}
