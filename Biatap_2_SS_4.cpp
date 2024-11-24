#include <stdio.h>

int main() {
    int num;
    
    printf("Nh?p vào m?t s? nguyên: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("S? %d là s? ch?n.\n", num);
    } else {
        printf("S? %d là s? l?.\n", num);
    }
    
    return 0;
}

