#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * new_dog - a function that creates a new dog
  * @name: takes a char
  * @age: takes a float
  * @owner: takes a char
  * Return: a pointer to a new dog.
  */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p_new_dog; /* a pointer to new dog of type dog_t*/
char *p_name; /* a pointer to copy of name for new dog */
char *p_owner; /* a pointer to copy of owner for new dog */
int i;
int counter; /* holds name length and owner length*/
int name_length;
int owner_length;

counter = 0;
while (name[counter] != '\0')
{
	name_length++;
	counter++;
} /* determines length of copied name string */
p_name = malloc(name_length *sizeof(char));
if (p_name == NULL)
	return (NULL);
counter = 0;
while (owner[counter] != '\0')
{
	owner_length++;
	counter++;
} /* determine length of copied owner */
p_owner = malloc(owner_length *sizeof(char));
if (p_owner == NULL)
	return (NULL);
for (i = 0; name[i] != '\0'; i++)
	p_name[i] = name[i]; /* make a copy of name */
for (i = 0; owner[i] != '\0'; i++)
	p_owner[i] = owner[i]; /* make a copy of owner */
p_new_dog = malloc(sizeof(dog_t)); /* allocate memory for new dog */
if (p_new_dog != NULL)
{
p_new_dog->name = name;
p_new_dog->owner = owner;
p_new_dog->age = age;
}
else
{
return (NULL);
} return (p_new_dog);
}
