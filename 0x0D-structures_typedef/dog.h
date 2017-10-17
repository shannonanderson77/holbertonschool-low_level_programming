#ifndef DOG_H
#define DOG_H

/**
  * struct dog - declaring a new type called dog
  * @name: dog's name
  * @owner: dog's owner
  * @age: dog's age
  *
  * Description: using typedef and struct, a new variable
  * dog is being declared
  */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
