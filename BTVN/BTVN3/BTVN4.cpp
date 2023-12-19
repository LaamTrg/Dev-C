#include <stdio.h>

int main(){
	int n, x, y;
	printf("Nhap so nguyen duong: ");
	scanf("%d",&n);
		
	if(n<0){
		printf("%d khong phai so nguyen duong",n);
	}else{
		x = n;
		
		while(x>=0){
			x /= 10;
		}
		y = x;
		printf("\nChu so dau tien cua %d la: %d", n, y);
	}
}
