#include <stdio.h>

int main() {
    int num;
    
    printf(" Nhap vao mot so nguy�n: ");
    scanf("%d", &num);
    
    if (num > 0) {
        printf("S? %d l� so duong.\n", num);
    } else if (num < 0) {
        printf("S? %d l� so �m.\n", num);
    } else {
        printf("S? %d l� so 0.\n", num);
    }
    
    return 0;
}

