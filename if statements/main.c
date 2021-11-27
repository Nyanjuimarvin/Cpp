#include <stdio.h>
#include <stdlib.h>

int main()
{/*checking whether number is even or odd*/
    int num;
    printf("Enter a number to check even or odd:");
    scanf("%d", &num);

/*% 2 is a modulo division operator*/
    if(num % 2==0){
        printf("Number is even");
    }else{
    printf("Number is odd");
    }
    return 0;
}
