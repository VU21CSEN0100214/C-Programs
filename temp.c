#include<stdio.h>
main()
{
	int temp;
	printf("Enter the temperature: ");
	scanf("%d",&temp);
	if(temp<0)
  {
  	 printf("Freezing Weather");
  }
    else if(temp<10)
	{
		printf("Very Cold Weather");
    }
    
    else if(temp<20)
    {
    	printf("Cold Weather");
	}
	else if (temp<30)
    {
 	printf("Normal Temperature");
	}
	else if (temp<40)
	{
		printf("Hot Weather");
	}
	else
	 {
	 	printf("Very Hot");
		 }	
}
