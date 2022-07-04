#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - a dog struct
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner
 *
 * Description: this is a struct for a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
#define NULL ((void*)0);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /*DOG_H*/
