#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    time_t cur_time;
    char* cur_t_string;
    cur_time = time(NULL);

 if(cur_time==((time_t)-1)){
            fprintf(stderr ,"Failure to get current time.\n");
       exit(EXIT_FAILURE);
       }

       cur_t_string= ctime(&cur_time);

       if(cur_t_string==NULL){
            fprintf(stderr ,"Failure to convert the current time.\n");
        exit(EXIT_FAILURE);
       }
       printf("\n The current time is: %s\n",cur_t_string);
       exit(EXIT_SUCCESS);

    return 0;
}
