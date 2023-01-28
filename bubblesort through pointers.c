#include<stdio.h>
void swap(int *,int *);
int main(){
	int a[5]={11,52,3,1,22};
	int *ptr=a;
	for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			if(ptr[i]>ptr[j]){
			swap(&ptr[i],&ptr[j]);
			}
		}
	}
	for(int i=0;i<5;i++){
	printf(" %d ",ptr[i]);
	}
	printf("\n reverse of array \n");
		for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			if(ptr[i]<ptr[j]){
			swap(&ptr[i],&ptr[j]);
			}
		}
	}
	for(int i=0;i<5;i++){
	printf(" %d ",ptr[i]);
	}
	int max=0;
	for(int i=0;i<5;i++){
		if(ptr[i]>max){
			max=ptr[i];
		}
	}
	printf("\n maximum number is %d",max);
}
void swap(int *a,int *b){
	*a= *a + *b;
	*b= *a - *b;
	*a= *a - *b;
}