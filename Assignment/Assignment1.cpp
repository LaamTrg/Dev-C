#include <stdio.h>
#include <math.h>

int main(){
	int A, B, C;
	printf("Nhap so thu nhat: ");
	scanf("%d",&A);
	printf("Nhap so thu hai: ");
	scanf("%d",&B);
	printf("Nhap so thu ba: ");
	scanf("%d",&C);
	
	float X1, X2, X3, Y;
	Y = B*B - 4*A*C;
	
	if(A == 0){
		if(B == 0){
			if(C == 0){
				printf("Phuong trinh co vo so nghiem");
			}else{
				printf("Phuong trinh vo nghiem");
			}
		}else{
			float X = -C / B;
			printf("Phuong trinh co nghiem duy nhat: %g",X);
		}
	}else{
		if(Y > 0){
			X1 = (-B + sqrt(Y))/(2*A);
			X2 = (-B - sqrt(Y))/(2*A);
			printf("Phuong trinh co 2 nghiem: %g va %g",X1,X2);
		}else if(Y == 0){
			X3 = -B/2*A;
			printf("Phuong trinh co nghiem kep: %g",X3);
		}else{
			printf("Phuong trinh vo nghiem");
		}
	}
}
