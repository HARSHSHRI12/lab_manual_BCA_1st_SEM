#include <stdio.h>
#include <math.h>

// Structure to represent a Cartesian point
struct Point {
    float x;
    float y;
};

// Function to calculate the distance between two points
float calculateDistance(struct Point p1, struct Point p2) {
    return sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
}

int main() {
    struct Point point1, point2;

    // Input for the first point
    printf("Enter the coordinates of the first point (x y): ");
    scanf("%f %f", &point1.x, &point1.y);

    // Input for the second point
    printf("Enter the coordinates of the second point (x y): ");
    scanf("%f %f", &point2.x, &point2.y);

    // Calculate and display the distance between the two points
    float distance = calculateDistance(point1, point2);
    printf("Distance between the two points: %.2f\n", distance);

    return 0;
}
