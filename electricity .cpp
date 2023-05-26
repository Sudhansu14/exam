#include<stdio.h>

main()
{
	int unit,ele_bill,sr,total;
	
	printf("enter ele_unit=");
	scanf("%d",&unit);
	
	if(unit<=50)
	{
		ele_bill=unit*0.50;
		printf("ele_bill=%d"elc_bill);
		
	}
	else if(unit<=150)
	{
		ele_bill=(unit-50)*0.75+25;
		printf("ele_bill=%d",elc_bill);
		
	}
	else if(unit<=250)
	{
		ele_bill=(unit-50)*1.20+25;
		printf("ele_bill=%d",elc_bill);
		
	}
	
}
