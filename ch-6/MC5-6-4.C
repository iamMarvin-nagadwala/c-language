#include<stdio.h>
#include<conio.h>
main()
{
	long long int i,factorial=1,n;
	clrscr();
	printf("enter your number: ");
	scanf("ll%d",&n);

	for(i=1; i<=n; i++)
	{

		factorial*=i;
	}
	printf("ll%d",factorial);
	getch();
}