/*

2D Matrix addition

*/

#include <stdio.h>

int main ()
{
  int sum;
  int a[2][2], b[2][2], i, j;
  printf ("----------Matrix 1----------\n\n");

  for (i = 0; i < 2; i++)
    {


      for (j = 0; j < 2; j++)
	{


	  printf ("element is - a[%d][%d] : ", i, j);
	  scanf ("%d", &a[i][j]);
	  // printf("%d",a[i][j]);

	}

    }

  for (i = 0; i < 2; i++)
    {

      printf ("\n");
      for (j = 0; j < 2; j++)
	{


	  printf ("%d\t", a[i][j]);
	}

    }

  printf ("\n\n");
  printf ("----------Matrix 2-----------");
  printf ("\n\n");
  // printf("%d",a[0][0]*a[0][1]);

  //printf("%d\t",a[i][j]);


  for (i = 0; i < 2; i++)
    {

      for (j = 0; j < 2; j++)
	{

	  printf ("element is: b[%d][%d] - ", i, j);
	  scanf ("%d", &b[i][j]);

	}
    }

  for (i = 0; i < 2; i++)
    {

      printf ("\n");
      for (j = 0; j < 2; j++)
	{

	  printf ("%d\t", b[i][j]);
	  //printf("\n\n");
	  // printf("%d\t",a[i][j]);

	}
    }

  printf ("\n\n");
  printf ("-----------Sum--------");
  printf ("\n\n");

  for (i = 0; i < 2; i++)
    {

      printf ("\n");

      for (j = 0; j < 2; j++)
	{

	  sum = a[i][j] + b[i][j];
	  printf ("%d\t", sum);

	}
    }



  return 0;
}
