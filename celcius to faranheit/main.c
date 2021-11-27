#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celcius,farenheit;
    int upper,lower,step;

    lower=0;
    upper=100;
    step=2;
    celcius=lower;

    while(celcius>=lower){
        farenheit=(celcius*9/5)+32;
        printf("%f\t%f\n",celcius,farenheit);
        celcius+=step;
    }

    return 0;
}
