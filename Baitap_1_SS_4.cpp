#include <stdio.h>

int main() {
    int num;
    
    printf(" Nhap vao mot so nguyên: ");
    scanf("%d", &num);
    
    if (num > 0) {
        printf("S? %d là so duong.\n", num);
    } else if (num < 0) {
        printf("S? %d là so âm.\n", num);
    } else {
        printf("S? %d là so 0.\n", num);
    }
    
    return 0;
}

