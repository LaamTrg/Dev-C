#include <stdio.h>
#include <math.h>

int main(){
	int A;
	printf("Nhap so thu nhat:");
	scanf("%d",&A);
	
	int B;
	printf("Nhap so thu hai:");
	scanf("%d",&B);
	
	int C;
	printf("Nhap so thu ba:");
	scanf("%d",&C);
	
	float x, y, z;
	x = A + B + C;
	y = x / 2;
	z = sqrt(y*(y-A)*(y-B)*(y-C));
	
	if(A<B+C && B<A+C && C<A+B){
		printf("3 so nay du dieu kien lam do dai 3 canh tam giac \n");
		printf("Chu vi tam giac: %f \n",x);
		printf("Dien tich tam giac: %f",z);
	}else{
		printf("3 so nay khong du dieu kien lam do dai 3 canh tam giac");
	}
}
