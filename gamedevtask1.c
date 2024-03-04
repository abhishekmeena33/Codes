#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPointInsideCircle(int x, int y, int centerX, int centerY, int radius) {
    // Calculate the distance between the point (x, y) and the center of the circle.
    double distance = sqrt((x - centerX) * (x - centerX) + (y - centerY) * (y - centerY);

    // If the distance is less than or equal to the radius, the point is inside or on the boundary.
    if (distance <= radius) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int x, y, r;
    int centerX = 0; // Change this to the x-coordinate of the circle's center
    int centerY = 0; // Change this to the y-coordinate of the circle's center

    // Input the coordinates and radius
    printf("Enter the x-coordinate: ");
    scanf("%d", &x);
    printf("Enter the y-coordinate: ");
    scanf("%d", &y);
    printf("Enter the radius: ");
    scanf("%d", &r);

    // Check if the point is inside or on the boundary of the circle
    bool result = isPointInsideCircle(x, y, centerX, centerY, r);

    if (result) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
