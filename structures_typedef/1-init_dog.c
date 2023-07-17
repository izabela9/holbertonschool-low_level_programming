#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function that initilizes a varable
 * @d: struct pointer
 * @name: name of the dog
 * @age: age of the dog
 * @owner: char variable name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		dog->name = name;
	dog->age = age;
	dog->owner = owner;
	}
}
