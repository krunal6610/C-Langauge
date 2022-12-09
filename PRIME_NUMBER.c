/*

Program to check the given number is prime or not prime

*/

#include <stdio.h>

int main ()
{
  int num, count = 0;
  printf ("Enter the number: ");
  scanf ("%d", &num);

  if (num == 0 || num == 1)
    {

      printf ("It is not a prime number");

    }



  for (int i = 2; i <= num / 2; i++)
    {

      if (num % i == 0)
	{

	  count = 1;
	  break;

	}


    }


  if (count == 1)
    {

      printf ("It is not a prime number");

    }
  else
    {

      printf ("It is a prime number");
    }

  return 0;
}
