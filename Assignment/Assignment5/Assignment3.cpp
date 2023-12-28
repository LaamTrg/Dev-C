#include <stdio.h>

int main(){
	int n, arr[n], a, b;
	printf("Nhap mang so nguyen: ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		printf("Nhap gia tri thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	a = arr[0];
	b = arr[0];
	for(int i=1;i<=n;i++){
		if(arr[i]<a){
			a = arr[i];
		}else if(arr[i]>b){
			b = arr[i];
		}
	}
	printf("Doan chua tat ca cac gia tri trong mang la [%d,%d]",a,b);
}
