//  print the binary, octal and hexadecimal equivalent of the number

#include<stdio.h>

void printBinary(int n)
{
    if(n > 1)
    printBinary(n / 2);
    printf("%d", n % 2);
}

int main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    printf("Given number : %d\n", num);

    printf("Binary equivalent : ");
    printBinary(num);
    printf("\n");

    printf("Octal equivalent : %o\n", num);

    printf("Hexadecimal equivalent : %x\n", num);

    return 0;
}