#ifndef DOG_H
#define DOG_H

/**
* struct dog - structue of dog
* @name: Dog's name
* @age: Age of the owner
* @owner: Dog owner's name
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};



void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

