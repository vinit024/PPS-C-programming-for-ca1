// Name:Vinit Sontakke PRN:24030331378024
#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;
    printf("Enter length and breadth: ");
    scanf("%f %f", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}