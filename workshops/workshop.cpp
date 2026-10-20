/* Selection Constructs
* if example
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    const int LIMIT = 5;

    int myNumber;          /* create variable */
    scanf_s("%d", &myNumber); /* read in number */

    if (myNumber > LIMIT)   /* if condition */
    {
        /* multi-line statement surrounded by {} */
        printf("bigger than five \n");

    }
    else if (myNumber == 0)
        printf("The number is 0! \n");
    else
        /* single line statement no need for {} */
        printf("not bigger than five\n");
    exit(0);
}
