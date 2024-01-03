#include <stdio.h>

int main(){
	int n, a, b, c, arr[n];
	printf("Nhap mang so nguyen: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf("Nhap gia tri thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n;i++){
		a = arr[i];
		b = arr[i+1];
		c = arr[i+2];
		if(a<b+c && b<a+c && c<a+b){
			printf("Day so lien tiep 3 canh cua tam giac la: ");
			printf("%d, %d, %d",a,b,c);
			break;
		}else{
			printf("Khong co day so lien tiep 3 canh cua tam giac");
			break;
		}
	}
}
