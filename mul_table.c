//Multiplication

#include<stdio.h>
int main(){
	int n;
	printf("Enter the table number:");
	scanf("%d",&n);
	printf("The Multiplication table for %d\n",n);
	for(int i=1;i<=10;i++){
		printf("%d x %d =  %d\n",n,i,n*i);
	}
	return 0;
}
