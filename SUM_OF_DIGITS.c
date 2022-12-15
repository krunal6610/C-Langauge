/*

    program make a summation of given number(E.g. 1523 ans :-11).

*/

#include <stdio.h>

int main ()
{
  int num, digit, sum = 0;
  printf ("Enter the number: ");
  scanf ("%d", &num);
  
  while (num > 0)
    {

      digit = num % 10;
      
      sum = sum + digit;

      num = num / 10;



    }

  printf ("Sum of digit is: %d", sum);

  return 0;
}
