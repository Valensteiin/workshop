#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
    /* Declare string size*/
    const int MAX_STRING_SIZE = 16;

    /* first string  */
    char filename[MAX_STRING_SIZE];

    /* a constant string */
    char dot[] = { '.','\0' };

    /* another stirng */
    char extension[MAX_STRING_SIZE];

    /* Reading from keyboard.
     * Note: We don't need the & the string is an array, and
     * therefore already a pointer
     */
    printf("Enter filename: ");
    scanf_s("%s", filename);

    /* Setting the string to some constant value
     */
    strcpy_s(extension, ".txt");

    /* adding to a string */
    strcat_s(filename, extension);

    printf("%s\n", filename);

    exit(0);
}