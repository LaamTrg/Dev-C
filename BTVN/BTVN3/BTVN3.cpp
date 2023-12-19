#include <stdio.h>

int main(){
	int n, x, y, z;
	printf("Nhap so nguyen: ");
	scanf("%d",&n);
	
	z = 0;
	
	while(n>=10){
		x = n / 10;
		y = n % 10;
		z = x + y;
		
		n = x;
	}
	z = z + n;
	printf("Tong cac chu so cua %d la: %d",n, z);
}
