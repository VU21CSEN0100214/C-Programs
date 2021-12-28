#include<stdio.h>
main()
{
int n,i=1,m;
printf("Enter the a number: ");
scanf("%d",&n);

while(i<=10)
  {
  	m = n*i;
  	printf("%d * %d = %d\n",n,i,m);
	 i++; 
	  }	
}
