#include <stdio.h>;


void hello(char[], int); //function prototype ENSURES FUNCTION TO WORK ONLY WITH ALL REQUIRED ARGUMENTS 



int main() {

    char name[] = "Bro";
    int age = 21;

    hello(name, age);

    return 0;
}

void hello(char name[], int age) {

    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);
}