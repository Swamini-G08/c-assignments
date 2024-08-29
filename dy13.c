// string is palindrome or not

#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) 
{
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) 
    {
        if (str[start] != str[end]) 
        {
            return 0; // Not a palindrome
        }
        
        start++;
        end--;
    }
    return 1; // Is a palindrome
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str)) 
    {
        printf("The string is a palindrome.\n");
    } 
    
    else 
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}