//lab 24 write a c program that reads rollno,name and marks in 5 subjects of 10 students and
//then compute total marks of each student and display of details
// fo those whose total maks is greater than 3000
#include <stdio.h>
#define N 2
struct subject
{
    int c, phy, dl, math, iit;
};
struct student
{
    int rn;
    char name[20];
    struct subject marks;
    int total;
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
    printf("enter rollno,name and marsk of the studnt \n");
    for (i = 0; i < N; i++)
    {
        scanf("%d%s", &s[i].rn, s[i].name);
        scanf("%d%d%d%d%d", &s[i].marks.c, &s[i].marks.phy, &s[i].marks.dl, &s[i].marks.math, &s[i].marks.iit);
        s[i].total = s[i].marks.c + s[i].marks.phy + s[i].marks.dl + s[i].marks.math + s[i].marks.iit;
    }
}
void display(struct student s[])
{
    int i;

    printf("rollno\tname\ttoatl marks\n");
    for (i = 0; i < N; i++)
    {
        if (s[i].total >= 300)
            printf("%d\t%s\t%d\n", s[i].rn, s[i].name, s[i].total);
    }
}