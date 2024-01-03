#include <stdio.h>

int main(){
	int n, x, y = 0;
	printf("Nhap so nguyen duong: ");
	scanf("%d",&n);
	
	if(n<0){
		printf("%d khong phai so nguyen duong",n);
	}else{
		x = n;
		
		while(n>0){
			int z = n % 10;
			if(z>y){
				y = z;
			}
			n = n / 10;
		}
		printf("Chu so lon nhat cua %d la: %d",x,y);
	}
}
