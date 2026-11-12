#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
    
    if (d == NULL)
        return;
    
    printf ("Name: %s\n", d->name ? d->name : "(nil)");
    printf ("Name: %f\n", d->age );
    printf ("Name: %s\n", d->owner ? d->owner : "(nil)");


}
