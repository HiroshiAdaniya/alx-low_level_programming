#ifndef DOG_H
#define DOG_H
/**
 * struct dog - pet information
 * @name: stores dog name
 * @age: age of dog
 * @owner: owner of dog
 * Description: This structure stores the information for a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
