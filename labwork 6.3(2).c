#include<stdio.h>
main()
{
	int i=1,n,factorial=1;
	printf("Enter Value=");
	scanf("%d",&n);
	for(i=1;n>=i;n--)
	{
		factorial=factorial*n;
	}
	printf("factorial value=%d",factorial);
}