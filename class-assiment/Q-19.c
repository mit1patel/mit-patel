/*#include<stdio.h>
int main()
{
	int phy, chem, bio, math, comp;
	printf("Enter five subjects marks:");
	scanf("%d%d%d%d%d",phy, chem, bio, math, comp);
	
	per = (phy + chem + bio + math + comp) /5.0;
	printf("Percentaga = %.2f\n",per);
	
	if(per>=90)
	{
		printf("Grade A");
	} 
	else if(per>=80)
	{
		printf("Grade B");
	}
	else if(per>=70)
	{
		printf("Grade C");
	}
	else if(per>=60)
	{
		printf("Grade D");
	}
	else if(per>=40)
	{
		printf("Grade F");
	}
	else(per<40)
	{
		printf("fail");
	}
	
    return 0;
}*/

#include <stdio.h>
int main()
{
    int phy, chem, bio, math, comp; 
    float per; 

    /* Input marks of five subjects from user */
    printf("Enter five subjects marks: ");
    scanf("%d%d%d%d%d", &phy, &chem, &bio, &math, &comp);


    /* Calculate percentage */
    per = (phy + chem + bio + math + comp) / 5.0;

    printf("Percentage = %2f\n", per);

    /* Find grade according to the percentage */
    if(per >= 90)
    {
        printf("Grade A");
    }
    else if(per >= 80)
    {
        printf("Grade B");
    }
    else if(per >= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}
