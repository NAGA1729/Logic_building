//sum of n numbers with using loops

#include<stdio.h>
int main(){
	int n,sum;
	printf("Enter the n value:");
	scanf("%d",&n);
	if(n>0){
		for(int i=1;i<=n;i++){
			sum=sum+i;
		}
		printf("The Sum of %d terms is %d\n",n,sum);
	}
	else{
		printf("please enter a valid number\n");
	}
	return 0;
}
