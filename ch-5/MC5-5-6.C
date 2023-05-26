#include<stdio.h>
#include<conio.h>
main()
{
	int choice;
	clrscr();

	printf("Enter...\n");
	printf("1) English\n");
	printf("2) hindi\n");
	printf("3) gujrati\n");
	printf("Enter your comfortable language:");

	scanf("%d",choice);

	switch(choice)
	{
		case 1:
			printf("1 for internet recharge");
			break;
		case 2:
			printf("2 for top-up recharge");
			break;
		case 3:
			printf("3 for special recharge");
			break;

			printf("enter your choice");
			break;

		default:
			printf("not valid !!");
			break;
	 }

	printf("\n================================\n");
	printf("your recharge has been sucessfuly");
	printf("\n================================\n");

	getch();
}
