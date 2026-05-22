#include <stdio.h>

int main(){

    float celsius;
    float farenheit;

    printf("Enter the temperature in celsius: ");
    scanf("%f", &celsius);

    farenheit = (1.8*celsius)+32;

    printf("%.2f degree celsius is %.2f farenheits", celsius, farenheit);

    return 0;
}