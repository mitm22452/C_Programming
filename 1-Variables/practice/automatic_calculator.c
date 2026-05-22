#include <stdio.h>

int main(){

    char line[] = "\n=====================================================================\n";
    printf("%s", line);
    printf("\t\t\tCalculator in C");
    printf("%s", line);

    float a; 
    printf("Enter first number ");
    scanf("%f", &a);

    float b; 
    printf("Enter second number ");
    scanf("%f", &b);

    // Add
    float add = a + b;
    printf("%s", line);
    printf("Addition of %.2f and %.2f is %.2f. ", a, b, add);

    // Subtract
    float sub = a - b;
    printf("%s", line);
    printf("Subtraction of %.2f and %.2f is %.2f. ", a, b, sub);

    // Multiply
    float mul = a * b;
    printf("%s", line);
    printf("Multiplication of %.2f and %.2f is %.2f. ", a, b, mul);

    // Divide
    float div = a / b;
    printf("%s", line);
    printf("Division of %.2f and %.2f is %.2f. \n\n", a, b, div);

    return 0;
}