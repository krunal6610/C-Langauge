#include <stdio.h>
#include <math.h>

int main ()
{
  int num, square, cube;

  printf ("-----Square_Cube-----\n\n");
  printf ("Enter the number: ");
  scanf ("%d", &num);

  //Square
  square = pow (num, 2);
  printf ("square is: %d\n", square);
  //Cube
  cube = pow (num, 3);
  printf ("cube is: %d", cube);

  return 0;
}
