#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    printf("Enter the First Point Coordinates = ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the Second Point Coordinates = ");
    scanf("%d %d", &x2, &y2);
    int x = pow((x2 - x1), 2);
    int y = pow((y2 - y1), 2);
    int dtn = sqrt(x + y);
    printf("\nThe Distance Between Two Points = %d\n", dtn);
}
