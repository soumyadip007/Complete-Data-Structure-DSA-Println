#include<stdio.h>
int main(){
	
  	int arr[10]={9, 19, 29, 39, 49, 59, 69,79};
	int key=99, pos=4;
	int n=8, i=0 ;
	
	for(i=n;i>pos;i--){				
		arr[i]=arr[i-1];
	}
	
	arr[pos]=key;

	for(int i=0;i<=n;i++){
		printf("\t%d\n",arr[i]);
	}
    
}

