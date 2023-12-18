#include <stdio.h>

int main(){
	int n, x, y;
	printf("Nhap so nguyen: ");
	scanf("%d",&n);
	
	x = 1;
	
	while(n != 0){
		y = n % 10;
		x = x * 10 + y;
        n /= 10;
	}
	printf("So dao nguoc cua %d la: %d",n,x);
}
