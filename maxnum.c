#include<stdio.h>
void main()
{
int n, i=1,k,m=0;
   printf("Enter a number to read those many numbers: ");
    scanf("%d",&n);

   while(i<=n)
   {
      printf("Enter the numbers: ");
       scanf("%d",&k);
        i++;

        if(m<k)
           m=k;
    }
            printf("Max number is %d",m);
}
