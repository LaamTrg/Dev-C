#include <stdio.h>

int main(){
	int n, arr[n], a, b, x;
	printf("Nhap mang so nguyen: ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		printf("Nhap gia tri thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	a = arr[0];
	b = arr[0];
	
	for(int i=1;i<n;i++){
		if(arr[i] > a){
			a = arr[i];
		}
		if(arr[i] < b){
			b = arr[i];
		}
	}
	
	if(a > -b){
		x = a;
	}else{
		x = b;
	}
	
	printf("Gia tri x la: %d",x);
}
