/* Example using realloc by TechOnTheNet.com */
/* The size of memory allocated MUST be larger than the data you will put in it */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, const char * argv[])
{
    /* Define required variables */
    char *ptr1, *ptr2;
    size_t length1, length2;
    /* Define the amount of memory required */
    length1 = 10;
    length2 = 30;
    /* Allocate memory for our string */
    ptr1 = (char *)malloc(length1);
    /* Check to see if we were successful */
    if (ptr1 == NULL)
    {
        /* We were not successful, so display a message */
        printf("Could not allocate required memory\n");

        /* And exit */
        exit(1);
    }
    /* Copy a string into the allocated memory */
    strcpy(ptr1, "C malloc");
    /* Oops, we wanted to say more but now do not
     have enough memory to store the message! */
    /* Expand the available memory with realloc */
    ptr2 = (char *)realloc(ptr1, length2);
    /* Check to see if we were successful */
    if (ptr2 == NULL)
    {
        /* We were not successful, so display a message */
        printf("Could not re-allocate required memory\n");

        /* And exit */
        exit(1);
    }
    /* Add the rest of the message to the string */
    strcat(ptr2, " at TechOnTheNet.com");
    /* Display the complete string */
    printf("%s\n", ptr2);
    /* Free the memory we allocated */
    free(ptr2);
    return 0;
}
