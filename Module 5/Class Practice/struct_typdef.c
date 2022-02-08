#include <stdio.h>

typedef struct
{
    char name[20];
    int age;
}stud;

int main()
{
    stud s1;
    printf("Enter the details of students s1\n");
    printf("Enter the name of the student: ");
    scanf(" %s", s1.name);
    printf("Enter the age of the student: ");
    scanf(" %d", &s1.age);
    printf("\nName of the student: %s\n", s1.name);
    printf("Age of the student: %d\n", s1.age);
    return 0;    
}
