#include<stdio.h>
main()
{
	 int i,fact=1,n;
	 printf("enter n");
	 scanf("%d",&n);
	 for(i=1;i<=n;i++)
	 {
	 	fact=fact*i;
	 }
	 printf("factorial=%d",fact);
}
