/*

  Program of Print a number and check the number is palindrome or not

*/

#include <stdio.h>

int main ()
{
  int digit, num, copy_num, rev = 0;

  printf ("enter the any num: ");
  scanf ("%d", &num);

  copy_num = num;

  while (num > 0)
    {				// 234

      digit = num % 10;

      rev = (rev * 10) + digit;

      num = num / 10;


    }

  printf ("Reversed num is: %d\n\n", rev);

  if (copy_num == rev)
    {

      printf ("num[%d] is palindrome", copy_num);

    }

  else
    {

      printf ("num[%d] is not palindrome", copy_num);

    }


  return 0;
}
