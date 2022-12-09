/*

program to find out the max number from given 10 elements of array

*/

#include <stdio.h>

int main ()
{
  int num[10], max, min;


  for (int i = 0; i < 10; i++)
    {

      printf ("Enter the number [%d] : ", i);
      scanf ("%d", &num[i]);

    }

  max = num[0];
  min = num[0];

  for (int i = 0; i < 10; i++)
    {

      if (num[i] > max)
	{

	  max = num[i];

	}
  



      if (num[i] < min)
	{
	    
	  min = num[i];
	  
	}
	

    }

  printf ("\n");
  printf ("Max number is: %d\n", max);
  printf ("Min number is: %d\n", min);


  return 0;
}

