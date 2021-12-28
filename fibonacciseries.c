#include<stdio.h>
main()
{
	int a,b,c,i,n;
	 printf("Enter the number of terms: ");
	 scanf("%d",&n);
	 a=0;
	 b=1;
	 c=0;
	  printf("fibonacci series: ");
	  printf("%d%d",a,b);
	  for(i=1;i<=n-2;i++)
	  {
	  	 a=b;
	  	 b=c;
	  	 c=a+b;
	  	  printf("%d",c);
	  }
}
