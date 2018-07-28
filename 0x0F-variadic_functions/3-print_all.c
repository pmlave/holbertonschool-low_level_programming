#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
void print_all(const char * const format, ...)
{
	va_list list;
	int i;
	char *str;

	va_start (list, format);
	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%i", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			str = va_arg(list, char *);
			if(str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		}
		if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] ==
					      'i' || format[i] == 'f' ||
					      format[i] == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
