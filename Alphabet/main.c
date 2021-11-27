#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch='a';

    printf("Alphabets from a - z are :\n");
    while(ch<='z'){
        printf("%c\n",ch);
        ch++;
    }
    return 0;
}
