//Even or Odd 
#include<stdio.h>
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);

	if(n%2==0){
		printf("The Entered number %d is Even number\n",n);
	}
	else{
		printf("Entered number %d is Odd number\n",n);
	}
	return 0;
}
