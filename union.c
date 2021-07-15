#include <stdio.h>
union {
    int x;
    float y;
    char z;
} d1;
int main()
{

    d1.y = 7.98;
    printf("Size of union is %d bytes.\n", sizeof d1);
    printf("Size of d1.y is %d bytes and value is %.2f.\n", sizeof d1.y, d1.y);
    d1.z = 'D';
    printf("Size of d1.z is %d byte and value is \'%c\'.\n", sizeof d1.z, d1.z, sizeof d1);
}
