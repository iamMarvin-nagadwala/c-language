#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();
	printf("enter first number:");
	scanf("%d",&a);

	printf("enter srcound number:");
	scanf("%d",&b);

	printf("enter third number:");
	scanf("%d",&c);

	if(a==b && b==c && c==a)
	{
		printf("all are same value");
	}
	else if(a==b)
		{
			if(a<c)
				printf("a and b are minimum");
			else
				printf("c is minimum");
		}

	if(a<b)
	{
		if(a<c)
		{
			printf("a is minimum");
		}
		else
		{
			printf("c is small");
		}
	}
	else
	{
		if(b<c)
			printf("b is minimum");
		else
			printf("c is minimum");
	}
		getch();

}
