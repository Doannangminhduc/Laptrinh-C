#include <stdio.h>

int main() {
    const float pi = 3.14159f;  // H?ng s? pi
    float radius = 5.5;         // B�n k�nh h�nh tr�n
    float area, circumference;

    area = pi * radius * radius;                  // C�ng th?c t�nh di?n t�ch
    circumference = 2 * pi * radius;              // C�ng th?c t�nh chu vi

    printf("Radius: %.2f\n", radius);
    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);

    return 0;
}

