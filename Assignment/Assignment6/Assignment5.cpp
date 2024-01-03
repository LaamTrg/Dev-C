#include <stdio.h>

int main(){
	int n, x=0, y=0, arr[n];
	printf("Nhap mang so nguyen: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf("Nhap gia tri thu %d: ",i+1);
		scanf("%d",&arr[i]);
		
		if(arr[i] > x){
			x = arr[i];
		}
	}
	printf("So nguyen lon nhat trong mang la: %d",x);
}
