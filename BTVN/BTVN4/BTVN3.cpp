#include <stdio.h>

int main(){
	int n, x;
	printf("Nhap mang so nguyen n: ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Nhap gia tri thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Nhap so nguyen x: ");
	scanf("%d",&x);
	
	int y = 0;
	for(int i=0;i<n;i++){
		if(x == arr[i]){
			y = 1;
			break;
		}
	}
	if(y==1){
		printf("So nguyen %d nam trong mang n",x);
	}else{
		printf("So nguyen %d khong nam trong mang n",x);
	}
}
