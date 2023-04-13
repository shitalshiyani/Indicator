#include<stdio.h>

swap (int *n1, int *n2)
{
	int *t;
	t=*n1;
	*n1=*n2;
	*n2=t;
	
	printf("Swapping Vlaue of A=%d\n",*n1);
	printf("Swapping Vlaue of B=%d\n",*n2);
}
main()
{
	int a,b;
	
	printf("Enter Value of A=");
	scanf("%d",&a);
	printf("Enter Value of B=");
	scanf("%d",&b);
	
	swap(&a,&b);
}
