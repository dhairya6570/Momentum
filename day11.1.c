#include<stdio.h>

int main (){
 
	char ch ;
	int a ;
	
	printf("Enter any character : ");
	scanf("%c",&ch);
	
	switch(ch){
		
		case 'a' ... 'z':
			printf("Value you have enter is Small Alphabet");
			break;
		
		case 'A' ... 'Z':
			printf("Value you have enter is Capital Alphabet");
			break;
		
		case '0' ... '9':
			printf("Value you have enter is Digit");
			break;
			
		default:
			printf("value you have enter is Special Character");		 	 
		
	}


	return 0 ;
}
