#include<stdio.h>
main()
{
	int c=0,i,n;
	 printf("Enter the number: ");
	 scanf("%d",&n);
	 for(i=1;i<=n;i++)
	 {
	 	if(n%i==0)
	 	{
	 		c= c+1;
		 }
	 }
	 if(c==2)
	 printf("%d is prime",n);
	  else
	  printf("%d is not a prime number",n);
}
