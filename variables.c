#include <stdio.h>
#include <stdbool.h>

int main() {

    int x; //declaration
    x = 123; //initialization
    int y = 321; // declaration and initialization
    bool e = false;
    int age = 21; //integer
    float gpa =2.05; //floating point number
    char grade ='C'; //single character
    char f = 126;
    char name[] ="Bro"; //array of characters -strings

    printf("Hello %s\n", name);
    printf("you are %d years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %f\n", gpa);
    printf("Bool is %d\n", e);
    printf("The ASCII code of the number one hundred and twenty six is %c\n", f);

    return 0;
}