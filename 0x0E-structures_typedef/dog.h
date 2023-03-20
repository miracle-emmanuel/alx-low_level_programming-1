#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - the dogs info
 * @name: n1
 * @age: n2
 * @owner: n3
 * Description: longer desgription
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
