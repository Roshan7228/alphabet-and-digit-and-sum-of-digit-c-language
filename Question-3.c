#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter a number:- ");
	scanf("%d",&n);
	int sum=0;
	int ld=0;
	do
	{
		ld=n%10;
		sum=sum+ld;
		n=n/10;
	   
		
		
		
	}while(n!=0);
	
	printf("Total sum of digit:- %d",sum);
	
	
	
	
	
	
	
	
	
	getch();
}
