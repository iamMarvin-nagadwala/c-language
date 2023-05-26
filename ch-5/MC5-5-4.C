#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,max;
	clrscr();
	printf("enter a value of a:\n");
	printf("enter a vlaue of b:\n");
	printf("enter a value of c:\n");
	printf("enter a value of d:\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);

	max=(a>b)
		?(a>c)
			? (a>d)
				? a
				: d
			:(c>d)
				? c
				:d
		: (b>c)
			?(b>d)
				? b
				: d
			: (c>d)
				? c
				: d ;

	printf("your maximum number:%d",max);


	getch();


}
