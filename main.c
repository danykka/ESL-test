#include <stdlib.h>
#include "vec3d.h"

int main() 
{
    Vector a;
    setVector(&a, 5, 7, 8);
    printVector(&a);

    Vector b;
    setVector(&b, 6, 7, 8);
    printVector(&b);

    subVector(&a, &b);
    printVector(&a);

    crossVector(&a, &b);
    printVector(&a);

    double dot;
    dot = dotVector(&a, &b);
    printf("%g", dot);
}