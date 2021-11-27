#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Enter your year: ");
    scanf("%d",&year);
    printf("%s",year%2==0?"Leap Year":"Not a Leap year");
    return 0;
}
