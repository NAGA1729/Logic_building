//Lower case char to upper case char

#include<stdio.h>
int main(){
	char ch1,ch2;
	printf("Enter the Lower case character only:");
	scanf("%c",&ch1);
	if(ch1>96&&ch1<123){
		ch2=ch1-32;
		printf("The converted lower char %c to upper char is %c\n",ch1,ch2);
	}
	else{
		printf("Enter the valid character \n");
	}
	return 0;
}
