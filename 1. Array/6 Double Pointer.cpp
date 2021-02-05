#include<stdio.h>
int main(){
	
	int a = 1000;
	int *ptr;
	ptr = &a;
	int **doubleptr;
	doubleptr = &ptr;
	
	printf("%d\n", ptr);      
	printf("%d\n", &ptr);   
	printf("%d\n", doubleptr);   
	printf("%d\n", *doubleptr);
	printf("%d\n", **doubleptr);
	
}
