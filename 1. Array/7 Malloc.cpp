#include<stdio.h>
#include<stdlib.h>
int main(){
		
	int *ptr;
	int n=8;
	ptr= (int*) malloc (n* sizeof(int));
	
	if(ptr){
		printf("\n\n Memory is allocated o_o \n\n");
	}
}
