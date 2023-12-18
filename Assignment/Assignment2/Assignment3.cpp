#include <stdio.h>
#include <math.h>

int main(){
	int n, x;
	printf("Nhap so nguyen: ");
	scanf("%d",&n);
	
	x = 1;
	
	printf("Uoc so cua %d la: ",n);
	
	while(x <= n){
		if(n%x == 0){
			printf("%d, ",x);
		}
		x++;
	}
}
