#include <stdio.h>

int main() {
    const float pi = 3.14159f;  // H?ng s? pi
    float radius = 5.5;         // Bán kính hình tròn
    float area, circumference;

    area = pi * radius * radius;                  // Công th?c tính di?n tích
    circumference = 2 * pi * radius;              // Công th?c tính chu vi

    printf("Radius: %.2f\n", radius);
    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);

    return 0;
}

