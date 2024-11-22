#include <stdio.h>

int main(){
	int number, sum,reverse , thousand, hunderd , ten, unit;
	printf("Nhap so nguyen co 4 chu so: ");
	scanf("%d",&number);
	thousand= number/1000;
	hunderd= (number/100)%10;
	ten= (number/10)%10;
	unit = number%10;
	sum = thousand +hunderd +ten +unit;
	reverse= unit*1000 + ten *100 + hunderd*10 + thousand*1;
	printf ("So nguoi dung nhap vao la: %d\n", number);
	printf("Tong cac chu so cua %d la : %d\n", number, sum );
	printf("So dao nguoc cua so %d la : %d\n", number, reverse);
	
	return 0;
	
}
