#include <stdio.h>

int main(){
	int i, j, k;
	
	printf("1.\n");
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n2.\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if((i+j)%2==0){
				printf("*");
			}
		}
		printf("\n");
	}
	printf("\n3.\n");
	for(i=0;i<5;i++){
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n4.\n");
	for(i=0;i<5;i++){
		for(j=0;j<=i;j++){
			for(k=0;k<=i;k++){
				printf("*");
			}
			printf("\t");
		}
		printf("\n");
	}
}
