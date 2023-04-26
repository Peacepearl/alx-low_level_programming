#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: If big-endian - 0.
 * 	   If little-endian - 1.
 */
int get_endiannes(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == !)
		return (1);

	return (*c);
}
