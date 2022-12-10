/*

program of to find out the Area of Triangle, Rectangle and Circle using Switch Case

*/

#include<stdio.h>
#define PI 3.14;

// declaration of functions
void menu ();
void restart ();

// main function
int main ()
{
  menu ();
  return 0;
}



// functions
void menu ()
{


  int choice;
  float length, base, height, width, radius, area_triangle, area_rectangle,
    area_circle;

  printf ("\n");

  printf ("--------AREA--------\n\n");
  printf ("Enter the [1] for area of Triangle\n");
  printf ("Enter the [2] for area of Rectangle\n");
  printf ("Enter the [3] for area of Circle\n\n");
  printf ("Please enter your choice: ");

  scanf ("%d", &choice);



  printf ("\n");

  switch (choice)
    {


      // Area of Triangle
    case 1:
      printf ("Enter the base: ");
      scanf ("%f", &base);
      printf ("Enter the height: ");
      scanf ("%f", &height);
      area_triangle = 0.5 * base * height;
      printf ("area of Triangle is = %0.2f\n\n", area_triangle);
      break;

      // Area of Rectangle
    case 2:
      printf ("Enter the Length: ");
      scanf ("%f", &length);
      printf ("Enter the Width: ");
      scanf ("%f", &width);
      area_rectangle = length * width;
      printf ("area of rectangle is = %0.2f\n\n", area_rectangle);
      break;

      // Area of Circle
    case 3:
      printf ("Enter the Radius: ");
      scanf ("%f", &radius);
      area_circle = 3.14 * radius * radius;
      printf ("area of Circle is = %0.2f\n\n", area_circle);
      break;

    default:
      printf ("Incorrect choice\n\n");





    }


  restart ();


}

void restart ()
{

  int choice_2;

  printf ("Do you want to continue Type [1] for yes or [0] for no: ");
  scanf ("%d", &choice_2);


  if (choice_2 == 1)
    {
      menu ();
    }
  else if (choice_2 == 0)
    {

      printf ("\nThank you...\n");

    }
  else
    {

      printf ("\nIncorrect choice\n\n");
    }



}


