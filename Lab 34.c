//lab 34: Create a structure called employee with data members: eid, name, salary, age,
// Write a C program that writes N employee records to file. Aslo read this content from file
// file and display on monitor
// write to file
#include <stdio.h>
#include <conio.h>
#define N 5
struct employee
{
    int eid;
    char name[20];
    int salary;
    int age;
};
void read(struct employee e[N])
{
    for (int i = 0; i < N; i++)
    {
        printf("Enter eid, name, salary and age of employee\n");
        scanf("%d%s%d%d", &e[i].eid, e[i].name, &e[i].salary, &e[i].age);
    }
}
int main()
{
    FILE *fp;
    struct employee e[N];
    int i;
    fp = fopen("C:\\janak\\employee.rec", "wb");
    if (fp == NULL)
    {
        printf("File not created\n");
    }
    else
    {
        printf("File opeden\n");
        printf("Enter %d employee record\n", N);
        read(e);
        fwrite(&e, sizeof(e), N, fp);
        printf("Record written to file");
    }
}