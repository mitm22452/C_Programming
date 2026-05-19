#include <stdio.h>

// ========================================================================================================================
// Program Notes:
// 
// Here we'll learn about variables in C. You define your variable type before assigning the value to it. 
// Basic variable types (also called primitive data types) in C include: int, char, float, double. 
// String is a list of characters (char)
// Here's example of each data type
// ========================================================================================================================

int main(){

    char line[] = "===========================================================\n";
    printf("%s", line);

    // Integer
    int a = 6;
    printf("%d\n", a);

    // Char
    char b = 'b';
    printf("%c\n", b);

    // Float
    float c = 10.45;
    printf("%f\n", c);

    // Double
    double d = 15.256;
    printf("%d\n", d);


    printf("\n\n\n\n");
    printf("%s", line);
    return 0;
}

// ========================================================================================================================
// ========================================================================================================================
// Declaration and Assignment
// 
// Declaration means declaring the data type of the variable. In int x; your are declaring x as an "int" (integer).
// In char c; you're declaring c as a "char" data type.
// 
// Assignment means assigning a value to the declared variable.
// x = 6; is called assignment as we're assigning value 6 to variable "x".
// c = 'a'; is also an assignment as we're assigning char "a" to variable "c"
// 
// To declare string, we use double quotes ("") and for char, we use single quotes ('')
// Value of a variable can be changed after assignment.
// 
// For ex:
// int x = 5;
// x = 6;
// 
// printf("%d", x);
// 
// Output will be 6.
// ========================================================================================================================
// ========================================================================================================================
// Rules for naming variables in C
// 
// First character of a variable should be an alphabet or an underscore (_)
// No commas or blanks are allowed
// No special symbols other than underscore are allowed
// Variable names are case sensetive. So variable A and a will have different values
// Keywords must not be used as variables.
// ========================================================================================================================
// ========================================================================================================================
// 
// "int" takes 4 bytes (32 bits) of storage
// "char" takes 1 bytes (8 bits) of storage
// "float" takes 4 bytes (32 bits) of storage
// 
// Note: Storage depends on teh architecture of the system. C may take 4 bytes on a x64 windows computer whereas 2 bytes on a embedded chip.

// Comments start with  //
// Multiline comments start from /* and ends with */
// 
// Note: Compiler (gcc) is the one which makes sure the code doesn't have any errors before passing it to the os.