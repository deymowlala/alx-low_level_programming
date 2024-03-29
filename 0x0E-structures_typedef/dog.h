#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Dog structure
 * @name:Dog's name
 * @age: Dog's age
 * @owner: Owner of dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
