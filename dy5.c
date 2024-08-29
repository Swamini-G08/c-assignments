// prog to check the input characters for uc, lc, no of digits & other characters

#include <stdio.h>
#include <ctype.h> 

int main() 
{
    char input[100]; 
    int upperCaseCount = 0;
    int lowerCaseCount = 0;
    int digitCount = 0;
    int otherCount = 0;

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    for (int i = 0; input[i] != '\0'; i++) 
    {
        if (isupper(input[i])) 
        {
            upperCaseCount++;
        } 
        else if (islower(input[i])) 
        {
            lowerCaseCount++;
        } 
        else if (isdigit(input[i])) 
        {
            digitCount++;
        } 
        else if (input[i] != '\n' && input[i] != '\r') 
        { 
            otherCount++;
        }
    }

    printf("Uppercase letters: %d\n", upperCaseCount);
    printf("Lowercase letters: %d\n", lowerCaseCount);
    printf("Digits: %d\n", digitCount);
    printf("Other characters: %d\n", otherCount);

    return 0;
}