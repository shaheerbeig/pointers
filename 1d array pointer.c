#include<stdio.h>

int main(){
	int a[5];
	int *ptr;
	ptr=a;
	int i;
	printf("enter element \n");
	for(i=0;i<5;i++){
		scanf("%d",(ptr + i));
	}
	for(i=0;i<5;i++){
		printf(" %d ",*(ptr + i));
	}
}