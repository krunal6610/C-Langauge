#include<stdio.h>


int main ()
{

  int Guj, Hin, Eng, Com, sci, total, percentage;

  printf ("-----RESULT-----\n\n");

  printf ("Enter the marks of Guj: ");
  scanf ("%d", &Guj);

  printf ("Enter the marks of Hin: ");
  scanf ("%d", &Hin);

  printf ("Enter the marks of Eng: ");
  scanf ("%d", &Eng);

  printf ("Enter the marks of Com: ");
  scanf ("%d", &Com);

  printf ("Enter the marks of sci: ");
  scanf ("%d", &sci);

  printf ("\n");

  total = Guj + Hin + Eng + Com + sci;
  percentage = total / 5;


  if (percentage > 75 && percentage < 100)
    {
      printf ("Your percentage is: %d = Distinction", percentage);

    }
  else if (percentage > 60 && percentage <= 75)
    {
      printf ("Your percentage is: %d = First Class", percentage);

    }
  else if (percentage > 50 && percentage <= 60)
    {
      printf ("Your percentage is: %d = Second Class", percentage);

    }
  else if (percentage > 35 && percentage <= 50)
    {
      printf ("Your percentage is: %d = Pass Class", percentage);

    }
  else if (percentage >= 0 && percentage <= 35)
    {

      printf ("You are fail");

    }
  else
    {

      printf ("Please enter the valid marks !");

    }


  return 0;
}
