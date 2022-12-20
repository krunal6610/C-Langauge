/*

  program to sort the array of 5 elements.

*/

#include <stdio.h>

int main ()
{
  int arr[5], temp;
  
  printf ("enter the 5 elements of array: \n\n");

  for (int i = 0; i < 5; i++)
    {


      printf ("enter element [%d] : ", i);
      scanf ("%d", &arr[i]);

    }

  printf ("\nInput elements are: \n\n");

  for (int i = 0; i < 5; i++)
    {


      printf ("%d\n", arr[i]);
      //scanf("%d",&arr[i]);

    }

  printf ("\nAfter ascending elements are: \n\n");

  for (int i = 0; i < 5; i++)
    {				// 40 35 30 25


      for (int j = i + 1; j < 5; j++)
	{

	  if (arr[i] > arr[j])
	    {

	      temp = arr[i];

	      arr[i] = arr[j];

	      arr[j] = temp;


	    }

	}
    }

  for (int i = 0; i < 5; i++)
    {


      printf ("%d\n", arr[i]);
    }

  return 0;
}
