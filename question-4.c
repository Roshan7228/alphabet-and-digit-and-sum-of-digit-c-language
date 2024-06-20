#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter Your score:- ");
	scanf("%d",&n);
	((n==100)?printf("Your grade is A++.\n"):(n<100 && n>=90)?printf("Your grade is A.\n"):(n<90 && n>=75)?printf("Your grade is B.\n"):(n<75 && n>=65)?printf("Your grade is C.\n"):(n<65 && n>=55)?printf("Your grade is D.\n"):(n<55 && n>=33)?printf("Your grade is E.\n"):(n<33 && n>=0)?printf("Your grade is F.\n"):printf(""));
	
	switch(n/10){
	
	  case 0:
	  	{
	  		 	printf("Sorry, you failed\n");
			   break;
		  }
	  case 1:{
	  	printf("Sorry, you failed\n");
			   break;
	}
	  case 2:{
	  	printf("Sorry, you failed\n");
			    break;
	}
	case 3:
		
	{	
	    if(n>=20 && n<33){
	  printf("Sorry, you failed\n");
	  break;
       } 
    }
	case 4:
	{  if(n>=33 && n<=40){
		printf("Pass\n");
		break;
	}
   }
	case 5:
		{
			if(n>=41 && n<=59){
				printf("Average\n");
				break;
			}
	}
	case 6:
		{ 
		   if(n>=60 && n<=69)
		   {
		   	printf("Above Average\n");
			   }
			break;
			   	
		}
	case 7:
		{
			if(n>=70 && n<=79)
			{
				printf("Good\n");
			}
		 break;
		}
	case 8:
	{
		if(n>=80 && n<=89){
			printf("Very Good\n");
		}
		break;
	}
	case 9:
	{
		if(n>=90 && n<=99){
			printf("Excellent\n");
		}
		break;
	}
	case 10:
	{
		if(n==100)
		{
			printf("Outstanding work!\n");
		}
		break;
	}			
    }
    
    if(n>=90 && n<=100){
    	printf("You are eligible for the next level or keep goin on.");
	}
	 else if(n<90 && n>=75){
    	printf("You are eligible for the next level but you will have to work a little harder.");
	}
	else if(n<75 && n>=65){
    	printf("You are eligible for the next level but you will have to work harder.");
	}
	else if(n<65 && n>=55){
    	printf("You are eligible for the next level but you will have to work hard.");
	}
	else if(n<55 && n>=33){
    	printf("You are eligible for the next level but you will have to work very hard");
	}
	else
	{
		printf("Please try again next time.");
	}
    
	
	
 
	
	
	
	getch();
}
