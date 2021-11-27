#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1,num2,max;
    printf("Enter a Number: ");
    scanf("%lf",&num1);
    printf("Enter a Number: ");
    scanf("%lf",&num2);

    max=(num1>num2)?num1:num2;
    printf("%f\n",max);
    return 0;
}
