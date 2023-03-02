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
	int i;
	int name_length;
	int owner_length;

	puppy = (dog_t *) malloc(sizeof(dog_t));
	if (puppy == NULL)
		return (NULL);
/*allocate mem for name and copy string*/
	name_length = 0;

	while (name[name_length])
		name_length++;
	puppy->name = (char *) malloc(name_length + 1);
	if (puppy->name == NULL)
	{
		free(puppy);
		return (NULL);
	}
	for (i = 0; i <= name_length; i++)
		puppy->name[i] = name[i];
/*allocate mem for owner and copy string*/
	owner_length = 0;

	while (owner[owner_length])
		owner_length++;

	puppy->owner = (char *) malloc(owner_length + 1);

	if (puppy->owner == NULL)
	{
		free(puppy->name);
		free(puppy);
		return (NULL);
	}

	for (i = 0; i <= owner_length; i++)
		puppy->owner[i] = owner[i];

	puppy->age = age;

	return (puppy);
}
