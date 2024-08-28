//Sum of n natural numbers

#include<stdio.h>
int main(){
	int n,sum;
	printf("Enter the 'n' value:");
	scanf("%d",&n);
	sum=(n*(n+1))/2;
	printf("The sum of %d numbers is:%d\n",n,sum);
	return 0;
}
