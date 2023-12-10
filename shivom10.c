#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float side, base, length, breadth, height, area, perimeter, radius;
    printf("Enter the shape you want to calculate the area and perimeter of:\n");
    printf("1. Circle\n2. Square\n3. Rectangle\n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = M_PI * pow(radius, 2);
            perimeter = 2 * M_PI * radius;
            printf("\nArea of the circle = %.2f square units\n", area);
            printf("Perimeter of the circle = %.2f units\n", perimeter);
            break;
        case 2:
            printf("Enter the side of the square: ");
            scanf("%f", &side);
            area = pow(side, 2);
            perimeter = 4 * side;
            printf("\nArea of the square = %.2f square units\n", area);
            printf("Perimeter of the square = %.2f units\n", perimeter);
            break;
        case 3:
            printf("Enter the length and breadth of the rectangle: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            perimeter = 2 * (length + breadth);
            printf("\nArea of the rectangle = %.2f square units\n", area);
            printf("Perimeter of the rectangle = %.2f units\n", perimeter);
            break;
        default:
            printf("Invalid choice.\n");
    }
}
