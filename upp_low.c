//Upper to Lower char 

#include<stdio.h>
int main(){
	char ch1,ch2;
	printf("Enter the upper characters only: ");
	scanf("%c",&ch1);
	if(ch1>64&&ch1<91){
		ch2=ch1+32;
		printf("The converted upper char %c to lower char is %c\n",ch1,ch2);
	}
	else{
		printf("Enter the valid Character\n");
	}
	return 0;
}
