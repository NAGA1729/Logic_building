//x to the power y

#include<stdio.h>
#include<math.h>
int main(){
	double x,y,z;
	printf("Enter the base value (x) :");
	scanf("%lf",&x);
	printf("Enter the exponent value (y) :");
	scanf("%lf",&y);

	z=pow(x,y);
	printf("%.2lf raised to the power of %.2lf is: %.2lf\n",x,y,z);
	return 0;
}
