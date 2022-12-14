/*

 program you have to print the Fibonacci series up to user given number

*/

#include <stdio.h>

int main ()

{
  int num1 = 0, num2 = 1, num = num1 + num2, n;
 
  printf ("enter the number of terms: ");
  scanf ("%d", &n);

  printf ("%d\n", num1);
  printf ("%d\n", num2);

  for (int i = 3; i <= n; i++)
    {


      printf ("%d\n", num);
      num1 = num2;
      num2 = num;
      num = num1 + num2;
    


    }

  return 0;
}
