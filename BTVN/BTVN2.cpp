#include <stdio.h>

int main(){
	int a, b, x, y, n, m;
	printf("Nhap so nguyen thu nhat: ");
	scanf("%d",&a);
	printf("Nhap so nghuyen thu hai: ");
	scanf("%d",&b);
	
	x = 1;
	y = 1;
	
	printf("Uoc so cua %d la: ",a);
	
	while(x <= a){
		if(a%x == 0){
			printf("%d, ",x);
		}
		x++;
	}
	
	printf("\nUoc so cua %d la: ",b);
	
	while(y <= b){
		if(b%y == 0){
			printf("%d, ",y);
		}
		y++;
	}
	
	n = a;
	m = b;
	
	while(m != n){
		if(n > m){
			n = n - m;
		}else{
			m = m - n;
		}
	}
	
	printf("\nUoc chung lon nhat la: %d",n);
	printf("\nBoi chung nho nhat la: %d",(a*b)/n);
}
