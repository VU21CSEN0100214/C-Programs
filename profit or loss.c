#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the cost price: ");
	scanf("%d",&a);
	printf("Enter the selling price: ");
	scanf("%d",&b);
	 if(b>a)
	 {
	 	printf("Profit is %d",b-a);
	 }
    else
     {
		   printf("Lose is %d",b-a);
     }
}
