#include <stdio.h>
#include <string.h>

typedef struct
{
    int employee_id;
    char name[20];
    int salary;
}Employee;


typedef struct
{
    char organisation_name[20];
    char org_number[20];
    Employee emp;
}Organisation;


void print(Organisation org)
{
    printf("Organisation Name : %s\n", org.organisation_name);
    printf("Organisation Number : %s\n", org.org_number);
    printf("Employee id : %d\n", org.emp.employee_id);
    printf("Employee name : %s\n", org.emp.name);
    printf("Employee Salary : %d\n", org.emp.salary);
}

int main()
{
    Organisation org;
    printf("The size of structure organisation : %ld\n", sizeof(org));
    org.emp.employee_id = 101;
    strcpy(org.emp.name, "Robert");
    org.emp.salary = 400000;
    strcpy(org.organisation_name, "GeeksforGeeks");
    strcpy(org.org_number, "GFG123768");
    print(org);
    return 0;
}
