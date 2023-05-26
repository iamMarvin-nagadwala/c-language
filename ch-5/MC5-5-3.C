#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,min;
	clrscr();
	printf("enter a value of a:\n");
	printf("enter a vlaue of b:\n");
	printf("enter a value of c:\n");
	scanf("%d%d%d",&a,&b,&c);

	min=(a<b)
		?(a<c)
			? a
			: c
		:(b<c)
			? b
			: c;
	printf("your minimum number:%d",min);


	getch();


}
