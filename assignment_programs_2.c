#include <stdio.h>
void main()
{
float length;
float breadth;
printf("Enter the dimensions (length and breadth) of the rectangle: \n");
scanf("%f %f",&length, &breadth);
printf("Area of the rectangle= %.2f \n",length*breadth);
printf("perimeter of the rectangle= %.2f",2*length+2*breadth);
}