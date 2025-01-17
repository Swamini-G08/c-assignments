// reverse the string without using strrev()

#include <stdio.h>
#include <string.h>

void reverseString(char str[]) 
{
    int length = strlen(str);
    char temp;

    for (int start = 0, end = length - 1; start < end; start++, end--) 
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
    }
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    reverseString(str);
    
    printf("Reversed string: %s\n", str);

    return 0;
}