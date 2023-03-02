#include<stdio.h>

int main (){
	
	char a ;
	
	printf("Type a first letter of week name to find it's full name : ");
	scanf("%c",&a);
	
	switch(a){
		
		case 'M':						
			printf("\nMONDAY");
			break;
			 
		case 'T':
			printf("\nTUESDAY");
			break;
			
		case 'W':
			printf("\nWEDNESDAY");
			break;
			
		case 't':
			printf("\nTHURSDAY");
			break;
			
		case 'F':
			printf("\nFRIDAY");
			break;
			
		case 'S':
			printf("\nSATURDAY");
			break;
			
		case 's':
			printf("\nSUNDAY");
			break;
			
		
		
		default:
			printf("\n\nOops!!!\nEnter the proper first letter of week name to find it's full Name...");											
		
	}
	
	return 0 ;
}
