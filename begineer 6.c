#include<stdio.h>
int main()
{
	float e,f,addition,substraction,multiply,division;
    printf("Enter a float number:");
	scanf("%f",&e);
	printf("Enter a float number:");
	scanf("%f",&f);
	addition=e+f;
	substraction=e-f;
	multiply=e*f;
	division=e/f;
	///divisibility=e%f;

	printf("Addition:%.2f\n",addition);
	printf("Substraction:%.2f\n",substraction);
	printf("Multiply:%.2f\n",multiply);
	printf("Division:%.2f\n",division);


    return 0;

}
