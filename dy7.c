// prog to accept a number from user using command line argument and display its table

#include<stdio.h>
#include<math.h>

int main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    for(int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}