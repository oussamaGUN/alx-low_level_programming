#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nil");
		return;
	}

	printf("Name = %s\n", d->name);
	printf("Age = %f\n", d->age);
	printf("Owner = %s\n", d->owner);
}
