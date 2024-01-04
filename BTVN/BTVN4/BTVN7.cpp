#include <stdio.h>

int main(){
	int n, a=0, b=0, c=0, d=0;
	printf("Nhap mang so nguyen: ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Nhap gia tri thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]){
			b += arr[i];
			d = i;
		}else{
			b = 0;
			c = i + 1;
		}
		if(b>a){
			a = b;
		}
	}
	
	printf("Chuoi so duong co tong lon nhat la: ");
	for(int i=c;i<=d;i++){
		printf("%d ",arr[i]);
	}
}
