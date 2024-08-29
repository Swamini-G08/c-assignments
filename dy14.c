// count occourance of each alphabet in the string

#include<stdio.h>
#include<ctype.h>
#define ALPHABET_SIZE 26

int main()
{
    char input[100]; 
    int counts[ALPHABET_SIZE] = {0};

    printf("Enter a string : ");
    fgets(input, sizeof(input), stdin);

    for (int i = 0; input[i] != '\0'; i++) 
    {
        char ch = toupper(input[i]); 

        if (ch >= 'A' && ch <= 'Z') 
        {
            counts[ch - 'A']++; 
        }
    }

    printf("Occurrences of each alphabet:\n");

    for (int i = 0; i < ALPHABET_SIZE; i++) 
    {
        if (counts[i] > 0) 
        {
            printf("%c: %d\n", 'A' + i, counts[i]);
        }
    }

    return 0;
}