//c program that reads n numbers and then find mean and median using dma
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, temp, s = 0;
    int *p;
    float mean, median;
    printf("how many numbers\n");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    if (p == NULL)
    {
        printf("memory alloction failed\n");
        exit(0);
    }
    else
    {
        printf("memory allocated\n");
        printf("enter %d numbers\n", n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", p);
            p = p + 1;
        }
        p = p - n;
        for (i = 0; i < n; i++)
        {
            s = s + *(p + i);
        }
        mean = (float)s / n;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - 1; j++)
            {
                if (*(p + j) > *(p + j + 1))
                {
                    temp = *(p + j);
                    *(p + j) = *(p + j + 1);
                    *(p + j + 1) = temp;
                }
            }
        }
        if (n % 2 == 1)
        {
            i = (n + 1) / 2;
            median = *(p + i - 1);
        }
        else
        {
            i = n / 2;
            median = (float)(*(p = i - 1) + *(p + i)) / 2;
        }
        printf("mean=%f\n", mean);
        printf("median=%f\n", median);
    }
    return 0;
}