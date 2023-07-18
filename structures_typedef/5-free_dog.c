#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that frees
 * @d: variable of the structure
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	if (d != NULL)
	free(d);
}
