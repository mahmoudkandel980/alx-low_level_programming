#include "main.h"
#include <stdio.h>

/**
 * main - function
 * Return: Always 0 (success).
 */
int main(void)
{
    char *str;
    int len;

    str = "main!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
