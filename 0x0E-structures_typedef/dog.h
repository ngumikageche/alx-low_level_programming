#ifndef HEADER_FILE
#define HEADER_FILE
/**
 *struct dog - a structure
 *@name:name of the Dog
 *@age:Age of the dog
 *@owner:name of the owner
 */
struct dog
{
char *name;
float age;
char *owner;
};
/**
 *dog_t - typedef for dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
