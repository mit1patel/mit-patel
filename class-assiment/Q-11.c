#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter number of days:");
	scanf("%d",&a);
	b=a/30;
	a=a%30;
	
	printf("\n %d month and %d days",b,a);
}
