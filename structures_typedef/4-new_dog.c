#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - function to create a new structure
 * @name: variable
 * @age: variable
 * @owner: variable
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return(new_dog);
}
