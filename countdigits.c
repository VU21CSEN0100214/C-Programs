#include<stdio.h>
main()
{
	int i=0,n;
	printf("Enter the n number: ");
	scanf("%d",&n);
	 while(n>0)
	 {
	 	
	 	n=n/10;
	 	i++;
	 	
	 	
	 }
 printf("no of digits=%d",i);	 
	 
}
