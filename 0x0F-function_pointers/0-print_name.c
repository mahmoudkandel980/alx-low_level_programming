/**
 * print_name - a function that prints a name
 * @name: print name
 * @f: pointer function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
