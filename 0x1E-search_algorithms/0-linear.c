#include "search_algos.h"

/**
 * linear_search - awopa
 * @array: first ele
 * @size: elem
 * @value: val
 *
 * Return: -1 pa
 */

int linear_search(int *array, size_t size, int value)
{
	size_t pos = 0;

	if (!array)
		return (-1);
	while (size--)
	{
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		pos++;
	}
	return (-1);
}
