#include <stdio.h>
#include <stdlib.h>

/* takes a pointer to a value as input and changes
   to give the output - value return */
void increment(int*);

void decrement(int*);

/* takes a string (char array - pointer to first char)
   and outputs the lenght (not including null terminator). */
int countCharacters(char*);

int main(int argc, char** argv)
{
    char test[] = "Hello";

    int count = 0;

    count = countCharacters(test);

    printf("Test string length is %d \n", count);

    /* take into account null terminator */
    /* note: takes a pointer must take address of count */
    increment(&count);

    printf("Test string (including null) length is %d\n", count);

	decrement(&count);

	printf("Test string (not including null) length is %d\n", count);
    exit(0);
}void increment(int* x)
{
    /* Use * to get from pointer to
       value it points to */
    *x = *x + 1;
}

int countCharacters(char* str)
{
    /* work though the chars, look for null */
    int  i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    

    return i;
}
void decrement(int* x)
{
    *x = *x - 1;
}