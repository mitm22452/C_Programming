#include <stdio.h>

int main(){

    float length;
    float breadth;
    
    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter breadth: ");
    scanf("%f", &breadth);

    float area = length * breadth;
    printf("\nArea of a triangle of length %.2f and breadth %.2f is %.2f. \n\n", length, breadth, area);


    return 0;
}