#include "main.h"

/**
 * convert - converts number and base into string
 * @num: input number
 * @base: input base
 * @lowercase: flag if hexa values need to be lowercase
 * Return: result string
 */
char *convert(unsigned long int num, int base, int lowercase)
{
	static char *rep;
	static char buffer[50];
	char *pointer;

	rep = (lowercase)
? "0123456789abcdef"
: "0123456789ABCDEF";
	pointer = &buffer[49];
	*pointer = '\0';
	do {
		*--pointer = rep[num % base];
		num /= base;
	} while (num != 0);

	return (pointer);
}
