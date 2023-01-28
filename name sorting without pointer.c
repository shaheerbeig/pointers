#include<stdio.h>
#include<string.h>
int main(){
	
	char name[100];
	int i,j,k;
	char temp;
	
	printf("ENTER YOUR NAME \n");
	gets(name);
	
	//for(i=0;name[i]!='\0';i++){
		for(j=0;j<strlen(name);j++){
			for(k=j+1;k<strlen(name);k++){
				if(name[j]>name[k]){
					temp=name[j];
					name[j]=name[k];
					name[k]=temp;
				}
			}
		}
//	}
	printf("YOUR NAME IS: %s" ,name);
}