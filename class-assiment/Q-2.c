#include<stdio.h>
main (){
	int a,b,c;
	printf("Enter the number:");
	scanf("%d",&a);
	
	printf("Enter the number:");
	scanf("%d",&b);
	
	printf("Enter the number:");
	scanf("%d",&c);
	
	if(a>b)
	{
		 printf("The maximum number is: %d\n",a);
	}
	else if(b>c)
	{
	 printf("The maximum number is: %d\n",b);
	}
	else if(c>a)
	{
		 printf("The maximum number is: %d\n",c);
	}
	else 
	{
		  printf("Both numbers are equal.\n");
	}
}
