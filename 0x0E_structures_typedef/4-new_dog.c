#include "dog.h"
#include <stdlib.h>
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner)

{

    dog_t *new;
    char *dog_name;
    char *dog_owner;

    new = malloc(sizeof(dog_t) );
    
    if (new == NULL)
        {
         return NULL;
         

        }    

    dog_name = malloc(strlen(name) + 1);

     if (dog_name == NULL)
         {
           
           
         free(new);
         return (NULL);
         }
    
    dog_owner = malloc(strlen(owner) + 1); 
    if (dog_owner == NULL)
    {
            
            free (dog_name);
            free(new);
            return (NULL);
    }

    strcpy(dog_name,  name);
    strcpy(dog_owner, owner);


    new->name = dog_name;
    new-> age =  age;
    new-> owner =  dog_owner;
   
    return (new);
    
}
