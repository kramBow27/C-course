#include <stdio.h>
#include <string.h>

int main() {
    printf("I like pizza");  
    int age;
    char name[25];

    printf("\n What's your name?");
    fgets(name, 24, stdin);
    name[strlen(name)-1] = '\0';
    printf("\nHello %s, how are you?", name);
    printf("\nHow old are you?\n");
    scanf("%d", &age);
    printf("You are %d years old\n", age); 
    return 0;
}