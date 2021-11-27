#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade='A';
    switch (grade){
case 'A':
    printf("You did great!");
    break;
case 'B':
    printf("You did alright");
    break;
    case 'C':
    printf("You did good");
    break;
    case 'D':
        printf("Try harder");
        break;
    case 'E':
        printf("You Failed");
        break;
    default :
        printf("Invalid Grade");
    }
    return 0;
}
