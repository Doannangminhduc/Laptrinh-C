#include <stdio.h>

int main() {
    int num;
    
    printf("Nh?p v�o m?t s? nguy�n: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("S? %d l� s? ch?n.\n", num);
    } else {
        printf("S? %d l� s? l?.\n", num);
    }
    
    return 0;
}

