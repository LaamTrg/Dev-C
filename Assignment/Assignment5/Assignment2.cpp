#include <stdio.h>

int main(){
	int n, x, a, b=0, c, arr[n];
	printf("Nhap so nguyen x: ");
	scanf("%d",&x);
	printf("Nhap mang so nguyen n: ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		printf("Nhap gia tri thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	for(int i=1;i<=n;i++){
		c = arr[1];
		a = arr[i];
		if(a<x+b || a>x-b){
			b = a;
			c = a;
		}
	}
	printf("Gia tri trong mang so gan %d nhat la: %d",x,c);
}
