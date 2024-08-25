//Positive or negative number

#include<stdio.h>
int main(){
	int num;
	printf("Enter only Number :");
	scanf("%d",&num);
	if(num<0){
		printf("Entered number %d is Negative number\n",num);
	}
	else if(num==0){
		printf("Entered number %d is either positive nor negative\n",num);
	}
	else{
		printf("Entered number %d is Positive number\n",num);
	}
	return 0;
}
