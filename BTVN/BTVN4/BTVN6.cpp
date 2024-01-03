#include <stdio.h>

int main(){
	int n, x=0. y=0;
	printf("Nhap mang so nguyen: ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=1;i<=n;i++){
		printf("Nhap gia tri thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			x++;
			if(x>y){
				y = x;
			}else{
				x = 0;
			}
		}
	}
	printf("Day so duong dai nhat: %d",y);
}
