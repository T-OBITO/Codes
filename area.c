#include <stdio.h>
int main()
 {
    float pie = 3.14;
    int radius;
    printf("Enter The Radius of Cicle:");
    scanf("%d",&radius);
    float area = pie* radius * radius;
    float peri = pie*2*radius;
    printf("\nThe area of the given circle is : %f", area);
    printf ("\nthe circumfrence of circle is : %f ", peri);

// rectangle
    float length, width, ar;
    printf("\n\nEnter length of Rectangle :");
    scanf("%f", &length);
    printf("\nEnter width of Rectangle :");
    scanf("%f", &width);
    ar = length * width;
    printf("\nArea of Rectangle : %f", ar);
    float pr =2*(length+width);
    printf("\nPerimeter of rectangle : %f",pr);

// square
    float side, a;
    printf("\nEnter length of side of square:");
    scanf("%f", &side);
    a = side * side;
    printf("\nArea of square : %f", a);
    float p=4*side;
    printf("\nPerimeter of square :%f",p);

    return 0;
}