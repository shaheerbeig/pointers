#include<stdio.h>
#include<string.h>
void arr(char name[][10]);
void print(char name[][10]);

int main(){
	char name[10][10];
	arr(name);//calling
	print(name);//calling
}
	void arr(char name[][10]){///defination
	int i,j,size ;
	printf("\n enter the number of names in the array\n");
	scanf("%d",&size);
	printf("\n enter the name in small case \n");
		for(i=0;i<size;i++){
			scanf("%s",name[i]);
		}
		
		for(i=0;i<size;i++){
			for(j=0;name[i][j]!='\0';j++){
				if(name[i][j]>='a'&&name[i][j]<='z'){
					name[i][j]=name[i][j]-32;
				}
			}
		}
		int  k  ;
		char temp;
		for(k=0;k<size;k++){
			for(i=0;name[k][i]!='\0';i++){
				for(j=i+1;name[k][j]!='\0';j++){
					if(name[k][i]>name[k][j]){
						temp=name[k][i];
						name[k][i]=name[k][j];
						name[k][j]=temp;
					}
				}
			}
		}
	}
	
	void print(char name[][10]){//defination
		int i , size;
	for( i=0;i<size;i++){
		printf(" %s ",name[i]);
		printf("\n");
	}
}
