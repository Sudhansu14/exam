#include<stdio.h>

main()
{
	int a,b,c,d;
	
	printf("enter value of a=");
	scanf("%d=",&a);
	printf("enter value of b=");
	scanf("%d=",&b);
	printf("enter value of c=");
	scanf("%d=",&c);
	printf("enter value of d=");
	scanf("%d=",&d);
	
	if(a<b);
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("A is max");
			}
			else
			{
				printf("D is max");
			}
		}
		else
		{
			if(c>d)
			{
				printf("C is max");
			}
			else
			{
				print("D is max");
			}
		}
	}
	else
	{
		if(b>c)
		{
		    if (b>d)
		    {
		    	printf("B is max");
			}
			else
			{
				printf("D is max");
			}
		}
		else 
		{
			if(c>d)
			{
				printf("C is max");
			}
			else
			{
				printf("D is max");
			}
		}
	}
	
}
