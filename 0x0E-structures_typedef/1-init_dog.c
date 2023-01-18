#include"dog.h"
#include<stdlib.h>
/**
 *init_dog-function that initialize a var of type struct dog
 *@d:struct name
 *@name:Dog name
 *@age:age of the dog
 *@owner:owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
;
}
else
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
