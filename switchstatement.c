#include <stdio.h>

int main() {
    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch(grade) {
        case'A': 
            printf("\nPerfect\n");
            break;
        case'B':
            printf("You did good\n");
            break;
        case 'C':
        printf("You did okay1\n");
        break;
        case 'F':
        printf("You failed\n");
        break;
        default:
        printf("\nEnter a valid grade");
    }
    
    return 0;
}