#include <stdio.h>
#include <stdlib.h>

/* Prototypes (Decelerations) */


/* No params and void return */
void printLine();

void printAnswer(int);

/* Three params and a return */
int addForth(int, int, int, int);

int main(int argc, char** argv)
{
    int x = 10;
    int y = 20;
    int z = 30;
	int w = 40;

    /* Calling addForth */
    int sum = addForth(x, y, z, w);

    /* Calling printLine */
    printLine();

    printf("Answer: %d\n", sum);
 
    printAnswer(sum);
}

/* Function Bodies (Definitions) */
void printLine()
{
    printf("superstar");
    /* void function has no return */
}


int addForth(int a, int b, int c, int w)
{
    /* local variable */
    int total = a + b + c + w;

    /*  must return an int */
    return total;
}

void printAnswer(int t)
{
	printf("%d\n", t);
}
