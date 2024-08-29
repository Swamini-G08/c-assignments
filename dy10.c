// sort the array and display them

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 10
#define MAX_NAME_LEN 50

int compareNames(const void *a, const void *b) 
{
    return strcmp((const char *)a, (const char *)b);
}

int main() 
{
    char nameOfStudents[MAX_STUDENTS][MAX_NAME_LEN];
    int n, i;

    printf("Enter the number of students (up to 10): ");
    scanf("%d", &n);

    if (n > MAX_STUDENTS) 
    {
        printf("You can only enter up to 10 names.\n");
        return 1;
    }

    printf("Enter the names of the students:\n");

    for (i = 0; i < n; i++) 
    {
        printf("Name %d: ", i + 1);
        scanf("%s", nameOfStudents[i]);
    }

    qsort(nameOfStudents, n, MAX_NAME_LEN, compareNames);
    printf("\nSorted list of students:\n");

    for (i = 0; i < n; i++) 
    {
        printf("%s\n", nameOfStudents[i]);
    }

    return 0;
}