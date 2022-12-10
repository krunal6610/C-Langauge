/*

program to find out the Max & Min number from given Matrix

*/

#include<stdio.h>

int main ()
{

  int arr[2][2], max, min;

// Matrix element scanf from user
  for (int i = 0; i < 2; i++)
    {

      for (int j = 0; j < 2; j++)
      
	{

	  printf ("Enter the value of [%d][%d] : ", i, j);
	  scanf ("%d", &arr[i][j]);

	}

    }

// Print the matrix
  printf ("\nMatrix is\n\n");

  for (int i = 0; i < 2; i++)
    {

      for (int j = 0; j < 2; j++)
      
	{

	  printf ("%d\t", arr[i][j]);


	}

      printf ("\n");

    }

  printf ("\n");

// Matrix max num & min num
  max = arr[0][0];
  min = arr[0][0];

  for (int i = 0; i < 2; i++)
    {

      for (int j = 0; j < 2; j++)
      
	{


	  // For Matrix max num
	  if (arr[i][j] > max)
	    {

	      max = arr[i][j];

	    }

	  // For Matrix min num
	  if (arr[i][j] < min)
	    {

	      min = arr[i][j];

	    }




	}
	
    }

  printf ("Max number in Matrix is: %d\n", max);
  printf ("Min number in Matrix is: %d\n", min);


  return 0;

}

