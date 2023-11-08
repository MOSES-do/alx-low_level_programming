#include "dog.h"
#include <stdlib.h>

/**
* init_dog - dog function
* @d: pointer to my_dog address
* @name: name of dog
* @age: age of dog
* @owner: Dog owner's name
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
