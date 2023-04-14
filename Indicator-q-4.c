#include<stdio.h>

main()
{
	char str[100],*length;
	
	printf("Enter String=");
	gets(str);
	
	length=str;
	int count=0;
	while (*length!='\0')
	{
		count++;
		length++;
	}
	
	printf("Length of String= %d",count);
}
