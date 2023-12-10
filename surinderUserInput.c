#include <stdio.h>

int main() {
    int choice;
    float radius, length, breadth, side, area, perimeter;

    printf("Enter your choice:\n");
    printf("1. Circle\n");
    printf("2. Square\n");
    printf("3. Rectangle\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            perimeter = 2 * 3.14 * radius;
            printf("Area of the circle: %0.2f\n", area);
            printf("Perimeter of the circle: %0.2f\n", perimeter);
            break;

        case 2:
            printf("Enter the side of the square: ");
            scanf("%f", &side);
            area = side * side;
            perimeter = 4 * side;
            printf("Area of the square: %0.2f\n", area);
            printf("Perimeter of the square: %0.2f\n", perimeter);
            break;

        case 3:
            printf("Enter the length and breadth of the rectangle: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            perimeter = 2 * (length + breadth);
            printf("Area of the rectangle: %0.2f\n", area);
            printf("Perimeter of the rectangle: %0.2f\n", perimeter);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
