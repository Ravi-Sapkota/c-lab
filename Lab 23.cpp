// Lab23 : Write a C program that reads rollno, name and marks of 10 students
//and then display the details of those students whose marks is greater than 80
#include <stdio.h>
#define N 5
    struct student
{
    int rn;
    char name[20];
    int marks;
};
void read(struct student s[]);
void display(struct student s[]);
int main()
{
    struct student s[N];
    read(s);
    display(s);
}
void read(struct student s[])
{
    int i;
    printf("Enter rollno, name and marks of %d students\n", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d%s%d", &s[i].rn, s[i].name, &s[i].marks);
    }
}
void display(struct student s[])
{
    printf("Rollno\tName\tMarks\n");
    for (int i = 0; i < N; i++)
    {
        if (s[i].marks >= 80)
            printf("%d\t%s\t%d\n", s[i].rn, s[i].name, s[i].marks);
    }
}
