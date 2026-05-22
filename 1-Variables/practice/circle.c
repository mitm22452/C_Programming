#include <stdio.h>

int main(){

    float radius;
    float height;
    float pi = 3.14;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    float area_of_circle = pi * (radius*radius);
    float volume_of_cylinder = area_of_circle * height;

    printf("Area of cicle is %.2f \n", area_of_circle);
    printf("Volume of circle is %.2f \n\n", volume_of_cylinder);

    return 0;
}