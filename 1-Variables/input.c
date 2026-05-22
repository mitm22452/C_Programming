#include <stdio.h>

// For taking inputs in C, we use "scanf" function from stdio.h directive.

// Fact: "stdio.h" means standard input output

int main(){

    int a;
    scanf("%d", &a);  // "&" is address of a. Which means that the value entered here belongs to variable a.
    printf("Value of a is %d\n\n", a);
    return 0;
}

// &d for decimals/integeres
// &f for float
// &c for characters

// Note: & (ampersand) is the address of operator in c.