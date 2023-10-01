//Looping programs:-
//1. WAP to print 972 to 897 using for loop
#include <stdio.h>
main()
{
	int i;
    for(i = 972; i >= 897; i--)
    {
	        printf("%d\n",i);
	}
}

//WAP to take 10 no. Input from user and find out … 
#include <stdio.h>
main()
{
	int i;
    int n = 10;  
    int numbers[20];
    int sum = 0;
    double average;

    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++) 
	{
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
       sum += numbers[i];
 	}
	average = (double)sum / n;
    
	printf("Sum of the numbers: %d\n", sum);
    printf("Average of the numbers: %.2lf\n", average);
}


