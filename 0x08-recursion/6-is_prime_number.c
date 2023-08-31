#include "main.h"

/**
  *helperFunction - funtion
  *@num: is an integer
  *@i: is an integer
  *Return: 0 or 1
  */

int helperFunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
			return (0);
		else
			return (helperFunction(num, i + 1));
	}
	else
	{
		return (1);
	}
}

/**
  *is_prime_number - function
  *@n: is an integer
  *Return: 1 or 0
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (helperFunction(n, 2));
}
