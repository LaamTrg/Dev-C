#include <stdio.h>
#include <math.h>

int main(){
	int A, B;
	printf("Nhap chieu cao: ");
	scanf("%d",&A);
	printf("Nhap can nang: ");
	scanf("%d",&B);
	
	float BMI;
	BMI = B / (A*A);
	
	if(BMI <= 18.5){
		printf("Tinh trang: gay");
	}else if(BMI > 18.5 && BMI <= 25){
		printf("Tinh trang: binh thuong");
	}else if(BMI > 25 && BMI <= 30){
		printf("Tinh trang: thua can");
	}else{
		printf("Tinh trang: beo phi");
	}
}
