#include <stdio.h>
#include <math.h>
int main()
{
    double radius;
    double area;
    double sourfaceArea;
    double volume;
    const double PI = 3.14159;

    printf("enter the radius:");
    printf("\n");
    scanf("%lf", &radius);
    printf("\n");
    area = PI * (radius * radius);
    printf("%lf is the area of circle.", area);
    printf("\n");
    sourfaceArea = (4 * PI) * (radius * radius);
    printf("%lf is the sourfaceArea of circle.", sourfaceArea);
    printf("\n");
    volume = (4.0 / 3.0) * PI * pow(radius, 3);
    printf("%lf is the volume of the circle.\n", volume);
}