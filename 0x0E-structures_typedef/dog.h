#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A STRUCT that defines a personalized data type for dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: This struct holds the following elemnet for a dog
 * the name of the dog, the age of the dog and the owner of
 * the dog
 */

/*struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
*/
typedef struct dog
{
        char *name;
        float age;
        char *owner;
}dog_t;

dog_t *new_dog(char *name, float age, char *owner);


#endif /*DOG_H */
