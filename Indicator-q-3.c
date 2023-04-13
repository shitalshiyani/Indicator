#include<stdio.h>

main()
{
	int a[100],n,i;
	int *p;
	p=&a;
	
	printf("Enter Value of N=");
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nElements of Array are=");
	for (i=0;i<n;i++)
	{
		printf("%d",*p+i);
	}
	
	printf("\nReverse Array Elements are=");
	
	int *rev;
	rev=&a[n-1];
	for (i=0;i<n;i++)
	{
		printf("%d",*rev--);
	}
}
