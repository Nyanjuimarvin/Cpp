#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f1,f2,f3,i,len;
    f1=0;
    f2=1;
    f3;
    i=3;
    len=100;

    while(i<=len){
        f3=f1+f2;
        printf("\%d",f3);
        f1=f2;
        f2=f3;
        i=i+1;
    }
    return 0;
}
