#include<stdio.h>
int main(){
	
	int arr[100]={9, 19, 29, 39, 49, 59, 69,79};
	int key=49, i=0, j=0, n=8 ;
	
	for(i=0;i<n;i++)			
		if(arr[i]==key)
			break;
	
	for(j=i; j<n-1; j++)			
		arr[j]=arr[j+1];

	for(int i=0;i<n-1;i++){
		printf("\t%d\n",arr[i]);
	}
    
}

