//Factorial without using function
#include<stdio.h>
int main(){
	int num,fact=1;
	printf("Enter only number:");
	scanf("%d",&num);

	for(int i=num;i>0;i--){
		fact*=i;
	}
	printf("The Factorial of the entered number %d is==%d\n",num,fact);
	return 0;
}
		
