// matrix multiplication

#include<stdio.h>

int main()
{
    int n;

    printf("Enter the size of matrix multiplication table : ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            printf("%4d", i * j);
        }

        printf("\n");
    }
    return 0;
}