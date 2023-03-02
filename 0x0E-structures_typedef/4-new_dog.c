#include "dog.h"

/**
* new_dog - create a new dog
* @name: store copy
* @age: return
* @owner: store copy
* Return: Always 0
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;

	puppy = (dog_t *)malloc(sizeof(dog_t));
	if (puppy == NULL)
		return (NULL);
/*allocate mem for name and copy string*/
	puppy->name = (char *)malloc(strlen(name) + 1);
	if (puppy->name == NULL)
	{
		free(puppy);
		return (NULL);
	}
	strcpy(puppy->name, name);

	puppy->owner = (char *)malloc(strlen(owner) + 1);
	if (puppy->owner == NULL)
	{
		free(puppy->name);
		free(puppy);
		return (NULL);
	}
	puppy->age = age;

	return (puppy);
}
