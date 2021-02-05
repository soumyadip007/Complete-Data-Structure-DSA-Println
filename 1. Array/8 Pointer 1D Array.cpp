#include<stdio.h>
#include<stdlib.h>
int main(){
		
	int arr[8]={11,22,33,44,55,66,77,88};
	int *ptr=arr;  
	
	for(int i=0;i<7;i++){
		printf("%d \n",  *(ptr+i));
	}

}
