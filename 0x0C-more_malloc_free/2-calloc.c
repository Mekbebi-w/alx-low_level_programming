#include <stdlib.h>
#include <stdio.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
int *m;

if (size == 0 || nmemb == 0)
	return (NULL);

m = malloc(nmemb * size);

if (m == 0)
	return (NULL);

for (i = 0; i < size; i++)
	m[i] = 0;

return (m);
}
