#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    char op;
    double num2;
    /*get input from the user*/
    printf("Enter a number:");
    scanf("%lf", &num1);
    printf("Enter operator:");
    scanf(" %c", &op);
    printf("Enter a number:");
    scanf("%lf", &num2);

    /*argument for operators*/
    if(op=='+'){
     printf("%f", num1+num2);
    }else if(op=='-'){
    printf("%f", num1-num2);
    }else if(op=='*'){
    printf("%f", num1*num2);
    }else if (op=='/'){
    printf("%f", num1/num2);
    }else{
    printf("invalid operator");
    }
    return 0;
}
