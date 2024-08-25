//Largest of three numbers using (a>b)?(a>c?a:c):(b>c?b:c)

#include<stdio.h>
int main(){
	int n1,n2,n3;
	int large_num;
	printf("Enter the three numbers:");
	scanf("%d%d%d",&n1,&n2,&n3);
	large_num=((n1>n2)?(n1>n3?n1:n3):(n2>n3?n2:n3));
	printf("LARGEST NUMBER is : %d\n",large_num);
	return 0;
}
