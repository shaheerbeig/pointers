#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5};
	int *p=&a[3];
	//p++;
	printf("VALUE OF A IS:%d \n",*p);
	printf("VALUE OF A IS:%d %d %d\n",*--p,*p--,*p--);
}