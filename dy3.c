// Fibonacci series

#include<stdio.h>

int main()
{
    int num, num1 = 0, num2 = 1, nextTerm;

    printf("Enter the number of series : ");
    scanf("%d", &num);

    printf("Fibonacci series : ");

    for(int i = 1; i <= num; ++i)
    {
        printf("%d ", num1);
        nextTerm = num1 + num2;
        num1 = num2;
        num2 = nextTerm;
    }
    return 0;
}









  
