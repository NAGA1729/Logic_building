//Char is Even or Odd
#include<stdio.h>
#include<string.h>
#define VOWELS 'a','e','i','o','u'

int main(){
	char ch;
	printf("Enter the character to check:");
	scanf("%c",&ch);
	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
		printf("Entered character %c is a Vowel\n",ch);
	}
	else{
		printf("Entered character %c is a Consonant\n",ch);
	}
	return 0;
}
	
	
