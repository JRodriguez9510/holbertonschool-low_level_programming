#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - defines a structure
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Structure dog has 3 members
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _putchar(char c);
#endif
