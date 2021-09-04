//lab 35: Create a structure called employee with data members: eid, name, salary, age,
//Write a C program that writes N employee records to file.
//1. Aslo read this content from file and display on monitor write to file
//2 Search employee record according to name
//3 Delete employee record according to eid
//4 Update employee record according to eid
//5 Display the records of employees whose salalry is greater than 50000
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define N 2
struct employee
{
    int eid;
    char name[20];
    int salary;
    int age;
};
void display(struct employee e)
{
    printf("%d\t%s\t%d\t%d\n", e.eid, e.name, e.salary, e.age);
}
int main()
{
    FILE *fp;
    int i, found = 0;
    struct employee e;
    char name[20];
    fp = fopen("C:\\janak\\employee.txt", "rb");
    if (fp == NULL)
    {
        printf("File not created\n");
    }
    else
    {
        printf("File opened...\n");
        getch();
        printf("Reading from file....\n");
        getch();
        printf("EID\tName\tSalary\tAge\n");
        while (fread(&e, sizeof(e), 1, fp))
        {
            display(e);
        }
        rewind(fp);
        printf("Enter the name of employee whose record is to be searched\n");
        gets(name);
        while (fread(&e, sizeof(e), 1, fp))
        {
            if (strcmp(name, e.name) == 0)
            {
                found = 1;
                break;
            }
        }
        if (found == 1)
        {
            printf("Record found and detail of record is as follows\n");
            display(e);
        }
        else
        {
            printf("Sorry your name is not in the list\n");
        }
        printf("Emplloyee details whose salary is greater than 30000\n");
        rewind(fp);
        while (fread(&e, sizeof(e), 1, fp))
        {
            if (e.salary > 30000 && e.salary < 35000)
                display(e);
        }
    }
    getch();
    return 0;
}