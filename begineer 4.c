#include<stdio.h>
int main()
{
	int c,d,addition,substraction,multiply,division,divisible;

	printf("Enter the value of c:");
	scanf("%d",&c);
	printf("Enter the value of d:");
	scanf("%d",&d);
	addition=c+d;
	substraction=c-d;
	multiply=c*d;
	division=c/d;
	divisible=c%d;

	printf("Addition=%d\n",addition);
	printf("Substraction=%d\n",substraction);
	printf("Multiply=%d\n",multiply);
	printf("Division=%d\n",division);
	printf("Divisible=%d\n",divisible);

	return 0;
}
