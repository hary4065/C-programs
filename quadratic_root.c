#include <stdio.h>
#include <math.h>
int main()
{
    float avg, a, b, c, u;
    printf("Values of Quadratic equation (highest degrees first)\n");
    scanf("%d %f %d", &a, &b, &c);
    b *= -1;
    avg = b / 2.0;
    u = sqrt(avg * avg - c / a);
    printf("Roots are (%3.2f, %3.2f)", avg - u, avg + u);
}