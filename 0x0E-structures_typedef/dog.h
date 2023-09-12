#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's main  info
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 *
 * Description: Longer description
 */
struct dog
{
	char *nme;
	float age;
	char *own;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *nme, float age, char *own);
void print_dog(struct dog *d);
dog_t *new_dog(char *nme, float age, char *own);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

