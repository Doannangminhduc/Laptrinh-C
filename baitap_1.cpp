#include <stdio.h>

int main() {
    // 1. Kieu so nguy�n (int)
    int age = 25; // Tu?i
    printf("Your age is: %d\n", age);

    // 2. Kieu so thuc (float)
    float height = 1.75f; // Chi?u cao (don v?: m�t)
    printf("Your height is: %.2f meters\n", height);

    // 3. kieu so thuc (double)
    double pi = 3.141592653589; // Gi� tr? c?a pi
    printf("Value of pi is: %.12lf\n", pi);

    // 4. kieu ki tu (char)
    char grade = 'A'; // �i?m h?c t?p
    printf("Your grade is: %c\n", grade);
	
	 return 0;
}

