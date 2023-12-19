#include <stdio.h>

int main(){
	int n, x, y;
	printf("Nhap so nguyen: ");
	scanf("%d",&n);
	
	x = 1;
	y = 0;
	
	printf("Uoc so cua %d la: ",n);
	
	while(x <= n){
		if(n%x == 0){
			printf("%d, ",x);
			y = y + x;
		}
		x++;
	}
	
	printf("\nTong so uoc cua %d la: %d", n, y);
}
