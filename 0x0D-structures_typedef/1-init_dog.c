#include <stdio.h>
#include "dog.h"

/**
  * init_dog - a function that initializes a variable of
  * type struct dog
  * @d: takes a type struct
  * @name: takes a dog char
  * @age: takes a type int
  * @owner: takes a type char
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (name != NULL)
d->name = name;
d->owner = owner;
d->age = age;
return;
}
