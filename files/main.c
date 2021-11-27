#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fpointer=fopen("Employees.txt","a");
    fprintf(fpointer, "Kelly: CUSTOMER SERVICE\n Oscar: SECRETARY");

    fclose(fpointer);
    ;
    return 0;
}
