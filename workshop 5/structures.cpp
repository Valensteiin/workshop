#include <stdio.h>
#include <stdlib.h>



#define HEALTH_PACK 1
#define STD_SHIELD 2
#define MISSILE_BOOM 3 

/* Pickup Item */
typedef struct Item
{
    int type;
    int value;
    int damage;
    int shield;
} Item;

typedef struct Points3f
{
    float xAxis;
    float yAxis;
    float zAxis;
} Points3f;

void printPoint3f(Points3f point);

int main(int argc, char** argv)
{
    Item healthPack;
    healthPack.type = HEALTH_PACK;
    healthPack.value = 10;
    healthPack.damage = -100;
    healthPack.shield = 0;


    Item shield;

    shield.type = STD_SHIELD;
    shield.value = 100;
    shield.damage = 0;
    shield.shield = 100;


    Item uberShield;
    uberShield.type = STD_SHIELD;
    uberShield.value = 200;
    uberShield.damage = 0;
    uberShield.shield = 200;

    Item missile;

    missile.type = MISSILE_BOOM;
    missile.value = 1000;
    missile.damage = 200;
    missile.shield = 0;

    Points3f centre;

    centre.xAxis = 0.0;
    centre.yAxis = 0.0;
    centre.zAxis = 0.0;

    Points3f left;

    left.xAxis = -1.0;
    left.yAxis = 0.0;
    left.zAxis = 0.0;

    Points3f right; 
    right.xAxis = 1.0;
    right.yAxis = 0.0;
    right.zAxis = 0.0;


    printf("the value of the missile is %d\n", missile.damage);
    printf("the shielding of the shield is %d\n", shield.shield);
    printf("centres");
    printPoint3f(centre);
    printf("x coordinates on left are %f\n", left.xAxis);
    printf("x coordinates on the right are %f\n", right.xAxis);


    exit(0);
}


void printPoint3f(Points3f point)
{
    printf("x, y, and z locations are %f %f %f\n", point.xAxis, point.yAxis, point.zAxis);
}
