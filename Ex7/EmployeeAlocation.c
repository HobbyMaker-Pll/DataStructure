#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int id, age;
	float salary;
	char gender;
} employee;

void printEmployees(employee* data, int size)
{
	for(int i=0; i<size; i++)
	{
		printf("=-=-=-=-=-=-=-=-=-");
		printf(
			"ID: %i\n Salary: %.2f\n Age: %i\n Gender: %c",
			employee[i].id,
			employee[i].salary,
			employee[i].age,
			employee[i].gender,
		)
	}
}

void registerEmployee(int id, employee* ret)
{
	printf("Insert salary: ");
	scanf("%f", ret)
	printf("Insert age: ");
	printf("Inser gender: ");
	
}

int main()
{
	employee* employees;
	int size, i;
	
	printf("Insert the number of employees: ");
	scanf("%i", &size);
	
	for(i=0; i<size; i++)
	{
		
	}
}
