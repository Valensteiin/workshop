/* Working with arrays - short example */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	/* Declare array size*/
	const int MAX_ARRAY_SIZE = 10;

	/* An array of integers */
	int myNumbers[MAX_ARRAY_SIZE];

	scanf_s("%d", &myNumbers[0]);
	scanf_s("%d", &myNumbers[1]);
	scanf_s("%d", &myNumbers[2]);
	scanf_s("%d", &myNumbers[3]);
	scanf_s("%d", &myNumbers[4]);
	scanf_s("%d", &myNumbers[5]);


	// getting all arrays out of the array 

	printf("Number at index 1 = %d\n", myNumbers[0]);
	printf("Number at index 2 = %d\n", myNumbers[1]);
	printf("Number at index 3 = %d\n", myNumbers[2]);
	printf("Number at index 4 = %d\n", myNumbers[3]);
	printf("Number at index 5 = %d\n", myNumbers[4]);
	printf("Number at index 6 = %d\n", myNumbers[5]);

	printf("Number at index 1 = %u\n", &myNumbers[0]);
	printf("Number at index 2 = %u\n", &myNumbers[1]);
	printf("Number at index 3 = %u\n", &myNumbers[2]);
	printf("Number at index 4 = %u\n", &myNumbers[3]);
	printf("Number at index 5 = %u\n", &myNumbers[4]);
	printf("Number at index 6 = %u\n", &myNumbers[5]);
}

