//Fibonacci series

#include<stdio.h>
int main(){
	int n,sum;
	int a=0;
	int b=1;
	printf("Enter the number of terms to be printed:");
	scanf("%d",&n);
	if(n<=0){
		printf("Please enter a valid number\n");
	}
	else{
		printf("The Fibonacci series for %d terms is: ",n);
		for(int i=1;i<=n;i++){
			printf("%d ",a);
			sum=a+b;
			a=b;
			b=sum;
		}
	printf("\n");	
	}
	return 0;
}
