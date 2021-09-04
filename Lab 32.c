// Lab 32       2021/08/19
//Write a C program that creates file "myfile.txt" and write text to this file at character at a time. Also read the content of file and display on monitor.
#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fp;
    char ch;
    char filename[60];
    printf("Enter file name with complete path\n");
    gets(filename);
    fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("File not created\n");
    }
    else
    {
        printf("File created\n");
        printf("Enter some text and enter new line at the end\n");
        while (1)
        {
            ch = getchar();
            if (ch == '\n')
                break;
            fputc(ch, fp);
        }
        printf("Written to file successfully...\n");
        fclose(fp);
        getch();
        printf("Opening file for read purpose...");
        getch();
        fp = fopen(filename, "r");
        if (fp == NULL)
        {
            printf("File not opened\n");
        }
        else
        {
            printf("File opened\n");
            while (1)
            {
                ch = fgetc(fp);
                if (ch == EOF)
                    break;
                printf("%c", ch);
            }
        }
        fclose(fp);
    }
}