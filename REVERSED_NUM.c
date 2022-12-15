/*

program to print the number in reverse order.

*/
#include <stdio.h>

int main ()
{
    
  int num, digit, reversed_num = 0;
  printf ("enter the number: ");
  scanf ("%d", &num);

  while (num != 0)
    {


      digit = num % 10;

      reversed_num = reversed_num * 10 + digit;

      num = num / 10;


    }

  printf ("reversed number is: %d", reversed_num);

  return 0;
}
