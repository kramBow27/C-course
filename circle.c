#include <stdio.h>

int main() {

    const double PI  = 3.14159; 
    double radius;
    double circumference;
    double area;
    printf("\nEnter radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
   area = PI * radius * radius;

    printf("\n Circumference is %-12.8lf", circumference);
    printf("\n Area is %12.8lf", area);

    return 0;
}