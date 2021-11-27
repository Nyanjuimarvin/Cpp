#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahr ,celcius;
    int lower, upper, step;
    /*lower and upper limits of the table(in farenheit)along with the table increment step size*/
    lower=0;
    upper=50;
    step=1;

    /*use this equation to create a conversion table :C=(5/9)(F_32)*/
    while (fahr<=upper){
        celcius=(5.0/9.0)*(fahr-32.0);
     printf("%3.0lf\t%6.1f\n", fahr, celcius);
     fahr+=step;
    }

    return 0;
}
