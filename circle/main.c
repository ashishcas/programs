#include <stdio.h>
#include <stdlib.h>
#include<math.h>

double area(double radius)
{

    return M_PI*radius*radius;
}

double perimeter(double radius)
{
    return 2*M_PI*radius;
}

double volume(double radius)
{
    return ((4*M_PI*radius*radius*radius)/3);
}

double surfacearea(double radius)
{
    return (4*M_PI*radius*radius);
}

double volumeofcylinder(double height,double radius)
{
    double a = area(radius);
    return height*a;
}

double surfaceareacylinder(double height,double radius)
{
   double b,c;
     b = area(radius);
     c = perimeter(radius);
    return (2*b+c*height);
}

double volumeofcone(double height,double radius)
{
    return (area(radius)*height/3);
}

double surfaceareacone(double height,double radius)
{
    return (area(radius)+M_PI*radius*height);
}

int main()
{
    double radius,height;
    radius = 7.3;
    height =  8.2;
    printf("Radius  CircArea  CircPerimeter  Cyclhei  Cylvol \n");
    while (radius < 13 && height <21)
    {
          printf("%.1lf       %.2lf       %.2lf       %.1lf       %.2lf \n",radius,area(radius),perimeter(radius),height,volumeofcylinder(height,radius));
        radius = radius + 0.7;
        height = height + 0.5 ;
    }
    return 0;
}
