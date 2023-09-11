#include <stdio.h>
#include "dog.h"

/**
  *init_dog - function that initialize a variable struct dog
  *
  *@d: The dog
  *
  *@name: dogs name
  *
  *@age: dog's age
  *
  *@owner: dog's owner
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
