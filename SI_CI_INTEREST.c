#include <stdio.h>
#include <math.h>


int main ()
{

  float p, r, t, si, a_si, ci, a_ci;

  printf ("-----SIMPLE INTEREST-----\n\n");

  printf ("Enter the Principal Amount: ");
  scanf ("%f", &p);

  printf ("Enter the Rate of Interest: ");
  scanf ("%f", &r);

  printf ("Enter the Time in Years: ");
  scanf ("%f", &t);

  printf ("\n");

  //Simple Interest
  si = (p * r * t) / 100;
  a_si = p + si;
  printf ("Simple Interest is: %f\n", si);
  printf ("Total Amount is: %f\n\n", a_si);

  //Compund Interest 
  printf ("-----COMPUND INTEREST-----\n\n");

  a_ci = p * pow ((1 + r / 100), t);
  ci = a_ci - p;
  printf ("Compund interest is: %f\n", ci);
  printf ("Total amount is: %f", a_ci);


  return 0;
}
