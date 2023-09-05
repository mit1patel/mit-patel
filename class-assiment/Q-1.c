#include<stdio.h>
main (){
	int a,b;
	printf("Enter the number:");
	scanf("%d",&a);
	
	printf("Enter the number:");
	scanf("%d",&b);
	
	if (a > b) 
	{
        printf("The maximum number is: %d\n",a);
    }
	else if (b > a) 
	{
        printf("The maximum number is: %d\n",b);
    }
	else 
	{
        printf("Both numbers are equal.\n");
    }
}
