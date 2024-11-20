#include <stdio.h>

int main() {
    int a = 25;
    int b = 5;

   
    int sum = a + b;
   
    int difference = a - b;
   
    int product = a * b;
   
    int quotient = a / b;

    printf("Tong cua %d va %d la: %d\n", a, b, sum);
  
    printf("Hieu cua %d va %d la: %d\n", a, b, difference);
    
	printf("Tich cua %d va %d la: %d\n", a, b, product);
   
    printf("Thuong cua %d va %d la: %d\n", a, b, quotient);

    return 0;
}

