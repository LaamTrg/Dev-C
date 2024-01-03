#include <stdio.h>

int main(){
	int n, x=0, y=0, arr[n];
	printf("Nhap mang so nguyen: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf("Nhap gia tri thu %d: ",i+1);
		scanf("%d",&arr[i]);
		
		if(arr[i]>0){
			x++;
		}else if(arr[i]<0){
			y++;
		}
	}
	printf("Luong so duong la: %d\n",x);
	printf("Luong so am la: %d",y);
}
