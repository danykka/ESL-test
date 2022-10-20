#include <stdio.h>
#include "vec3d.h"

void setVector(Vector* v, double x, double y, double z) 
{
    v->x = x;
    v->y = y;
    v->z = z;
}

void printVector(Vector* v)
{
    printf("(%g , %g , %g)\n",v->x, v->y, v->z);
}

void addVector(Vector* v1, Vector* v2)
{
    v1->x = v1->x + v2->x;
    v1->y = v1->y + v2->y;
    v1->z = v1->z + v2->z;
}

void subVector(Vector* v1, Vector* v2)
{
    v1->x = v1->x - v2->x;
    v1->y = v1->y - v2->y;
    v1->z = v1->z - v2->z; 
}

double dotVector(Vector* v1, Vector* v2)
{
    return (v1->x)*(v2->x) + (v1->y)*(v2->y) + (v1->z)*(v2->z);
}

void crossVector(Vector* v1, Vector* v2)
{
    double tmp_x = (v1->y)*(v2->z) - (v1->z)*(v2->y);
    double tmp_y = (v1->z)*(v2->x) - (v1->x)*(v2->z);
    double tmp_z = (v1->x)*(v2->y) - (v1->y)*(v2->x);

    v1->x = tmp_x;
    v1->y = tmp_y;
    v1->z = tmp_z;
}