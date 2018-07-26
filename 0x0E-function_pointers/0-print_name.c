/**
 * print_name - printing a name given
 * @name: Pointer to the given name
 * @f: Given function to point to
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *f != NULL)
	f(name);
}
