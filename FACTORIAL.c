/*

   program to find out the factorial of given number using function

*/

#include <stdio.h>
void factorial (int num);

int main ()
{
  int num;
  printf ("Enter the number: ");
  scanf ("%d", &num);

  factorial (num);
  return 0;
}

void factorial (int num)
{

  int fac = 1;
  for (int i = 1; i <= num; i++)
    {

      fac = fac * i;


    }

  printf ("%d", fac);

}
