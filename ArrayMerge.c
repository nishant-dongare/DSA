#include<stdio.h>
void main(){
	int a[3];
	int c[6];
	for(int i=0;i<3;i++){
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	int b[3];
	printf("\n 2nd array \n");
	for(int j=0;j<3;j++){
		scanf("%d",&b[j]);
	}

	for(int i=0;i<3;i++){
		c[i+3] = b[i];
	}
	for(int i=0;i<6;i++){
		printf("%d\t",c[i]);
	}
}