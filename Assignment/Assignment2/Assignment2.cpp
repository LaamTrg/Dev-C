#include <stdio.h>

int main(){
	int n, x, y;
	printf("Nhap so nguyen: ");
	scanf("%d",&n);
	
	while(x<n){
		if(x > y && x % 2 == 0 && x % 3 == 0){
			y = x;
		}
		x++;
	}
	printf("So lon nhat nho hon %d, chia het cho 2 va 3 la: %d\n",n,y);
}
