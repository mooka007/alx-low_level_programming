#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * Owned By MoOka
 * @d: the strust dog to be printed
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL && d->owner != NULL)
		printf("Name : %s\n Owner : %s\n", d->name, d->owner);
	else
		printf("Name: (nil)\n, Owner: (nil)\n");
	if (d->age < 0)
		printf("Age : (nill\n");
	else
		printf("Age : %f\n", d->age);
}
