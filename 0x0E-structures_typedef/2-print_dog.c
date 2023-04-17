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
		if (d->name == NULL)
		{
			printf("Name: (nil)");
		}
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
		{
			printf("Owner: (nil)");
		}
			printf("Owner: %s\n", d->owner);
	}
}
