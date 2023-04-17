#include "dog.h"

/**
 * print_dog - funtion prints dog info
 * @d: dog
 *  Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (name == NULL)
			printf("Name: %s\n", (nil));

			printf("Name: %s\n", d->name);
		if (owner == NULL)
			printf("Owner: %s\n", (nil));

			printf("Owner: %s\n", d->owner);
			prinrf("Age: %f\n", d->age);
	}
}
