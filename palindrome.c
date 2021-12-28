#include<stdio.h>
main()
{
	int i,n,a,r=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	 n=a;
	 while(n>0)
	 {
	 	i=n%10;
	 	r=r*10+i;
	 	n=n/10;
	 	
	 }
	 if (r==a)
	  printf("Palindrome");
	 else
	  printf("Not a Palindrome");
}
