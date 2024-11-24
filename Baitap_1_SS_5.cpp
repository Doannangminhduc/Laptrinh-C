#include <stdio.h>
#include <windows.h>

int main() {
    int i = 100;
    while (i >= 1)
        printf("%d\n", i--), Sleep(100);
    return 0;
}

