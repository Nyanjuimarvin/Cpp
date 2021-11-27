#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, Number = 1, count;

  printf(" Prime Number from 1 to 100 are: \n");
  while(Number <= 100)
  {
    count = 0;
    i = 2;
    while(i <= Number/2)
    {
      if(Number%i == 0)
      {
        count++;
	break;
      }
      i++;
    }
    if(count == 0 && Number != 1 )
    {
	printf(" %d ", Number);
    }
    Number++;
  }
    return 0;
}
