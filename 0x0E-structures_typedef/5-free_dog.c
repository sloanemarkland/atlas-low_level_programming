#include "dog.h"

/**
* free_dog - func that frees dog
* @d: instance of struct dog
* Return: Always 0
*/
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
	return;
}
