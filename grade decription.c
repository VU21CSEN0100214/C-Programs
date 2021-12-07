#include<stdio.h>
main()
{
	char grade;
	printf("Enter Grade: ");
	scanf("%c",&grade);
	
	if(grade=='e'||grade=='E')
	{
		printf("Excellent");
	}
	else if(grade=='v'||grade=='V')
    {
	    printf("Very Good");
	  } 
   else if(grade=='g'||grade=='G')
   {
     	printf("Good");
    
   }
   else if(grade=='a'||grade=='A')
   {
   	printf("Average");
   }
   else
   {
   	printf("Fail");
   }
   }
