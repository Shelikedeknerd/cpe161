#include<stdio.h>
#include<concio.h>

main()
{
	int A;
	printf("Enter point: ");
	scanf("%d",&A);
	if ((A<=100)&&(A>=60))
		printf("%d point = Good\n",A);
	else if ((A<60)&&(A>=40))
		printf("%d point = Pass\n",A);
	else
		printf("%d point = Fail\n",A);
	getch();
	return 0;
		
}
