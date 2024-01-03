#include <stdio.h>

int main(){
	int n, i=1, x=1;
	printf("Nhap so nguyen duong: ");
	scanf("%d",&n);
	
	if(n<0){
		printf("Day khong phai so nguyen duong");
	}else{
		while(i<=n){
			x = x * i;
			i++;
		}
	}
	printf("Giao thua cua %d la: %d",n,x);
}
