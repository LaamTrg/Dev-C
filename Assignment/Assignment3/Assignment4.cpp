#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c;
	
	while(1){
		printf("Nhap so thu nhat:");
		scanf("%d",&a);
		printf("Nhap so thu hai:");
		scanf("%d",&b);
		printf("Nhap so thu ba:");
		scanf("%d",&c);
		
		if(a<b+c && b<a+c && c<a+b){
			printf("3 so nay du dieu kien lam do dai 3 canh tam giac\n");
			break;
		}else{
			printf("3 so nay khong du dieu kien lam do dai 3 canh tam giac, vui long nhap lai\n");
		}
	}
	
	float x, y, z;
	x = a + b + c;
	y = x / 2;
	z = sqrt(y*(y-a)*(y-b)*(y-c));
	
	printf("Chu vi tam giac la: %g\n",x);
	printf("dien tich tam giac la: %g",z);
}
