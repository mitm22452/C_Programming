#include <stdio.h>

int main(){

    float principal;
    float annual_rate;
    float time_period;

    printf("Enter the Principal amount: ");
    scanf("%f", &principal);

    printf("Enter the Annual rate: ");
    scanf("%f", &annual_rate);

    printf("Enter the time (in years)");
    scanf("%f", &time_period);

    float final_amount = principal*(1+(annual_rate*time_period));

    printf("\n\nFinal amount is: %f\n\n\n", final_amount);
    return 0;
}