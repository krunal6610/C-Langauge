/*

  Program of find the element of given position from the array.

*/

#include <stdio.h>

int main ()
{
  int arr[5];
  int num, p, count = -1, count2 = -1;

  printf ("enter the 5 elements: \n\n");

  for (int i = 0; i < 5; i++)
    {

      printf ("enter element at position [%d] : ", i);
      scanf ("%d", &arr[i]);


    }

  printf ("\n\n------NUM_TO_POS------\n\n");
  printf ("\nenter the num to find it position: ");
  scanf ("%d", &num);


  for (int i = 0; i < 5; i++)
    {

      if (num == arr[i])
	{

	  count = i;

	  //scanf("%d",&arr[i]);

	}

    }

  if (count == -1)
    {

      printf ("enter valid num\n");


    }
  else
    {

      printf ("position is [%d]\n", count);
    }



  printf ("\n\n------POS_TO_NUM------\n\n");

  printf ("\nenter the position to find the element: ");
  scanf ("%d", &p);

  for (int i = 0; i < 5; i++)
    {

      if (arr[i] == arr[p])
	{

	  count2 = i;


	}


    }

  if (count2 == -1)
    {

      printf ("enter valid position\n");

    }
  else
    {

      printf ("\nAt position[%d] num is: %d", p, arr[p]);	//count2,arr[count2]

    }


  return 0;
}


