#include <stdio.h>

int main() {
    int n, sum = 0;
// Buoc 1
    do {
        printf("Nhap mot so nguyen duong: ");
        scanf("%d", &n);

        if (n <= 0)
            printf("So nhap khong hop le. Vui long thu lai!\n");
    } while (n <= 0);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }
// Buoc 2
    printf("Tong cac so tu 1 den %d la: %d\n", n, sum);
    
// Buoc 3
    return 0;
}

