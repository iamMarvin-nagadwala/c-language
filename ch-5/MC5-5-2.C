#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d;
	clrscr();
	printf("enter a:");
	scanf("%d",&a);

	printf("enter b:");
	scanf("%d",&b);

	printf("enter c:");
	scanf("%d",&c);
	printf("enter d:");
	scanf("%d",&d);

	if(a==b && b==c && c==a)
	{
		printf("all are same value");
	}
	else if(a==b)
		{
			if(a>c)
				printf("a and b are max");
			else
				printf("c is max");
		}

	if(a>b)
	{
		if(a>c)
		{
			printf("a is max");
		}
		else
		{
			printf("c is max");
		}
	}
	else
	{
		if(b<c)
			printf("b is max");
		else
			printf("c is max");
	}
		getch();

}
