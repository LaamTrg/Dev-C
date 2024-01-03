#include <stdio.h>

int main(){
	int n, x=0, y, arr[n];
	printf("Nhap mang so nguyen: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf("Nhap gia tri thu %d: ",i+1);
		scanf("%d",&arr[i]);
		
		int z = 1;
		for(int j=i+1;j<n;j++){
			if(arr[i] == arr[j]){
				z++;
			}
		}
		if(z > x){
			x = z;
			y = arr[i];
		}
	}
	
	printf("Gia tri xuat hien nhieu nhat trong mang la: %d",y);
}
