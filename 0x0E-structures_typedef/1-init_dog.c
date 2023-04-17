#include "dog.h"
#include <stdio.h>

/**
 * init_dog - init a dog
 * @d: the dog
 * @name: char
 * @age: float
 * @owner: char
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->owner = owner;
	d->age = age;
}
