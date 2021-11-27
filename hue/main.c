#include <stdio.h>
#include <stdlib.h>

int main()
{/*check whether number is divisible by 5 and 11*/
    int num;
    printf("Enter a number divisible by 5 and 11:");
    scanf("%d",&num);

/*modulo division*/
    if((num % 5==0) && (num % 11==0)){
    printf("number is divisible by 5 and 11");
    }else{
    printf("number is not divisible by 5 and 11");
    }
    return 0;
}
