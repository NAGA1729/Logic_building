//swapping with using 3rd variable
#include<stdio.h>
int main(){
	int a,b,temp;
	printf("Enter the two numbers to be swapped:");
	scanf("%d%d",&a,&b);
	printf("Before swapping numbers are a=%d and b=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping numbers are a=%d and b=%d\n",a,b);
	return 0;
}
