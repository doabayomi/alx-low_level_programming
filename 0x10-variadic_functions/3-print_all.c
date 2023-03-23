#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints all characters
 * @format: The type of each argument passed ...I guess
 *
 * Return: 0;
*/
void print_all(const char * const format, ...)
{
	va_list p;
	char type;
	char *s;
	int i = 0;

	va_start(p, format);
	while (format != NULL && format[i])
	{
		type = format[i];
		switch (type)
		{
			case 'c':
				printf("%c", va_arg(p, int));
				break;
			case 'i':
				printf("%d", va_arg(p, int));
				break;
			case 'f':
				printf("%f", va_arg(p, double));
				break;
			case 's':
				s = va_arg(p, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
		}

		if ((type == 'c' || type == 'i' || type == 'f'
		|| type == 's') && format[i + 1])
			printf(", ");
		i++;
	}
	va_end(p);
	printf("\n");
}
