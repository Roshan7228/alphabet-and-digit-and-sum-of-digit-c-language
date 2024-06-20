#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter a number:-");
	scanf("%d",&n);
	int sum=0;
	do{
		 n=n/10;
	     sum++;
		
		
		
	}while(n!=0);
	printf("Total digit are:-%d",sum);
	
	
	
	
	
	
	
	
	
}
