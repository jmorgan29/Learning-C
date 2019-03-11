/* Another program for calculating the area of a circle */

#include <stdio.h>

#define PI 3.14159

float process (float radius);

main()
{
float radius,area;
printf("Radius = ? ");
scanf("%f", &radius);
area = process(radius);
printf("Area = %f\n",area);
}

float process(float r)
{
    float a;
    a=PI*r*r;
    return(a);
}