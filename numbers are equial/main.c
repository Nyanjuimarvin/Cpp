#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;

    printf("Enter a number:");
    scanf("%d",&num1);
    printf("Enter a number:");
    scanf("%d",&num2);

    if(num1==num2){
        printf("Number1 and Number2 are equal");
    }else{
    printf("Number1 and number2 are not equal");
    }
    return 0;
}
