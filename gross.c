#include<stdio.h>
int main()
{
	int salary,hra,da,ga;
	printf ("Enter your basic salary");
	scanf ("%d",&salary);
	
	
	hra=salary* 20/100 ;
	printf ("hra:  %d\n",hra);
	//printf("HRA: %d\n", hra);
i8
	da=salary* 40/100 ;
	printf ("da %d  \n",da);
	
	ga=salary+hra+da;
	
	printf("%d ",ga);
	return 0;
}

/*#include<stdio.h>

int main()
{
    int salary, hra, da, ga;
    printf("Enter your basic salary: ");
    scanf("%d", &salary);

    // Corrected percentage calculation (use float for proper division)
    hra = salary * 20 / 100;  // 20% of the basic salary
    da = salary * 40 / 100;   // 40% of the basic salary

    // Gross Salary calculation
    ga = salary + hra + da;

    // Corrected printf statements (no '&' used in the variable)
    printf("HRA: %d\n", hra);
    printf("DA: %d\n", da);
    printf("Gross Salary: %d\n", ga);

    return 0;
}*/
