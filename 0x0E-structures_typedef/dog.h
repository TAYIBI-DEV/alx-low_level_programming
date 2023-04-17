#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 *struct dog - a dog structer
 * @name: char
 * @age: int
 * @owner: char
 *
 * Description: dog information
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
