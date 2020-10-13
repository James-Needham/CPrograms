#include <stdio.h> 

int main(void)
{
    double PI = 3.14159;
    double radius;
    double area;

    printf("Please enter the radius:\n");
    scanf("%lf" , &radius);

    area = PI * (radius*radius);

    printf("The area of the circle is %f\n", area);
    return 0;
}