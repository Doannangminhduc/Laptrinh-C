#include <stdio.h>

int main() {
    const float pi = 3.14;
    int r = 5;
    float perimeter = 2 * r * pi;
    printf("Chu vi h�nh tr�n l� %.2f\n", perimeter);
    float acreage = r * r * pi;
    printf("Di?n t�ch h�nh tr�n l� %.2f\n", acreage);
    return 0;
}

