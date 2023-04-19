/**
 * print_name - prints a name using a function pointer
 * @name: name to be printed
 * @f: function pointer used to print the name
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
