#include <stdio.h>

int main() {
    int oldIndex, newIndex, consumption;
    long totalCost = 0;

    printf("Nhap chi so cu: ");
    scanf("%d", &oldIndex);
    printf("Nhap chi so moi: ");
    scanf("%d", &newIndex);

    consumption = newIndex - oldIndex;

    if (consumption < 0) {
        printf("Chi so moi phai lon hon chi so cu.\n");
    } else {
        if (consumption <= 50) {
            totalCost = consumption * 1000;
        } else if (consumption <= 100) {
            totalCost = 50 * 1000 + (consumption - 50) * 1500;
        } else {
            totalCost = 50 * 1000 + 50 * 1500 + (consumption - 100) * 2000;
        }

        printf("Tien dien phai tra la: %ld VND\n", totalCost);
    }

    return 0;
}

