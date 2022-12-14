/*

   program to print the Fibonacci series using function.

*/

#include <stdio.h>

int fibo (int n);

// 0 1 1 2 3 5 8 13 ...

int main ()
{
  int n;
  printf ("enter the number of terms: ");
  scanf ("%d", &n);

  // printf("%d",fibo(n));

  for (int i = 0; i < n; i++)
    {

      printf ("%d\n", fibo (i));

    }

  return 0;
}

int fibo (int n)
{

  if (n == 0)
    {

      return 0;
    }
  if (n == 1)
    {

      return 1;
    }



  return fibo (n - 1) + fibo (n - 2);

}
