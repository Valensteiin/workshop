#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define _CRT_SECURE_NO_WARNINGS

const int NAME_MAX = 32;

/* Pickup Item */
typedef struct Item
{
    char name[NAME_MAX];
    int value;
    int damage;
    int shield;
} Item;

void outputItem(Item);

int main(int argc, char** argv)
{
    Item healthPack;
    strcpy(healthPack.name, "Health Pack");
    healthPack.value = 10;
    healthPack.damage = -100;
    healthPack.shield = 0;

    exit(0);
}

void outputItem(Item item)
{
    printf("The item is a %s \n", item.name);
}