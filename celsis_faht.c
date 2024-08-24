//celsius to fahrenheit (X`c x 9/5)+32

#include<stdio.h>
#define FAH 1.8 
int main(){
	int c;
	float f;
	printf("Enter the Celsius value:");
	scanf("%d",&c);

	f=(c*FAH)+32;
	printf("Convertion of Celsius degree value %d to Fahrenheit degree is: %f\n",c,f);
	return 0;
}
