#include <stdint.h>
int main()
{
    float radius, area, triangle, square, pi = 3.14, side, base, height;
    // pi is a constant value
    printf("enter whatever you want to calculate\n");
    printf("1 for area of circle\n");
    printf("2 for area of triangle\n");
    printf("3 for area of square\n");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
            printf("enter the radius of circle\n");
            scanf("%f", &radius);
            area = pi * radius * radius;
            printf("the area of circle is %f", area);
            break;
        case 2:
            printf("enter the base and height of triangle\n");
            scanf("%f %f", &base, &height);
            triangle = 0.5 * base * height;
            printf("the area of triangle is %f", triangle);
            break;
        case 3:
            printf("enter the side of square\n");
            scanf("%f", &side);
            square = side * side;
            printf("the area of square is %f", square);
            break;
        default:
          printf("invalid choice");
    }
}