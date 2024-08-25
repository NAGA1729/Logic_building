//Leap year or not {(y%4==0&&y%100!=0)||(y%400==0)}

#include<stdio.h>
int main(){
	int year;
	printf("Enter the Year to check:");
	scanf("%d",&year);
	if(year<=0){
		printf("Please Enter a valid year\n");
	}
	else if((year%4==0&&year%100!=0)||(year%400==0)){
		printf("Entered year %d is a LEAP YEAR\n",year);
	}
	else{
		printf("Entered year %d is not a Leap Year\n",year);
	}
	return 0;
}
