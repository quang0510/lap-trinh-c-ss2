#include <stdio.h>
int main(){
	int a, b, tong, hieu, tich, thuong;
	printf("nhap vao so thu nhat\n");
	scanf("%d", &a);
    printf("nhap vao so thu hai\n");
	scanf("%d", &b);
	tong = a + b;
	printf("Tong cua hai so là : %d\n", tong);
	hieu = a - b;
	printf("Hieu cua hai so la : %d\n", hieu);
	tich = a * b;
	printf("Tich cua hai so la : %d\n", tich);
	thuong = a / b;
	printf("Thuong cua hai so la : %d\n", thuong);
	return 0;
}
