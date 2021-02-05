#include<stdio.h>
int main(){

	int a=1000;
	int *ptr;
	ptr=&a;
	
	printf("%d\n", a);      //print value of a
	printf("%d\n", &a);   	//print the address of a
	printf("%d\n", ptr);   	//print the value of ptr
	printf("%d\n", *ptr);   //print the value of a

}



