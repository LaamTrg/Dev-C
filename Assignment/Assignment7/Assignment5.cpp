#include <stdio.h>

int bcnn(int a, int b){
	for(int i=a;i<=a*b;i++){
		if(i%a==0 && i%b==0){
			return i;
		}
	}
	return a*b;
}

int main(){
	int a, b;
	printf("Nhap so thu nhat: ");
	scanf("%d",&a);
	printf("Nhapo so thu hai: ");
	scanf("%d",&b);
	
	int x = bcnn(a,b);
	printf("Boi chung nho nhat cua hai so la: %d",x);
}
