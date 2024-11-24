#include <stdio.h>

int main() {
    int target = 3;
    int guess;

    printf("Nhap mot so nguyen !\n");

    do {
        printf("Nhap so cua ban: ");
        scanf("%d", &guess);

        if (guess != target)
            printf("Sai roi! Thu lai.\n");
    } while (guess != target);

    printf("Chinh xac! So ban nhap la %d.\n", target);
    return 0;
}

