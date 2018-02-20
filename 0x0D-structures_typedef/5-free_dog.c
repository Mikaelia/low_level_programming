#include "dog.h"
#include <stdlib.h>
/**
  * free_dog - a function that frees dogs
  * @d: dog struct
  *
  * Return: void
  */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
