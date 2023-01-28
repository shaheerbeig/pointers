#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	int*q=arr;
	int i;
	
	//printing value of the array..
	for(i=0;i<5;i++){
		printf("<q+%d>=%d \n",i,*q+i);
	}
	
}