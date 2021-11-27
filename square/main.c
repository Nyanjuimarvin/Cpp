#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num,square;
    printf("Enter a number: ");
    scanf("%lf",&num);

    square=pow(num,2);
    printf("%f",square);
    return 0;
}
