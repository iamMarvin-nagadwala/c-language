#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	const float pi=3.14,r=4;

	clrscr();
	P("area of circle:%.2f",pi*r*r);
	getch();
}