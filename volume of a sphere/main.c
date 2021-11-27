#include <stdio.h>
#include <stdlib.h>
#define PI (3.14)
#define volume(x)(4/3)*(PI)*(x)*(x)*(x)
int main()
{
    double x , volume;

    printf("Enter radius of the circle:");
    scanf("%lf",&x);

    volume=volume(x);
    printf("Volume of the cube is %f ", volume);
    return 0;
}
