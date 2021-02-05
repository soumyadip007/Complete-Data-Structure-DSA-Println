#include <stdio.h>

int main() {
  char answer;
  
  printf("\n Do you want to put number? Enter Y or N: \n");
  
  scanf(" %c", &answer);
  
  int key;
  
  while (answer == 'Y' || answer == 'y') {
	
	printf("\nPlease enter the Number:");
	
	scanf("%d",&key);
	
    for(int i=1;i<10;i++){
    	int mul=key*i;
    	printf("%d * %d = %d\n",key,i,mul);
	}

    printf("\n Do you want to put another number? Y or N: \n");

    scanf(" %c", & answer);
    
    printf("\n answer is %c\n", answer);
    

  }
  printf("Tata :<");
  
  return 0;
}
