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
	printf("Elements in Array are=");
	for (i=0;i<n;i++)
	{
		printf("%d\n",*(p+i));
	}
	
}
