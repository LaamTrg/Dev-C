#include <stdio.h>
#include <math.h>

int main(){
	int n, x;
	printf("Nhap so nguyen: ");
	scanf("%d",&n);
	
	while(x<n){
		if(x%2 != 0){
			printf("%d\n",x);
		}
		x++;
	}
}
