// student structure

#include <stdio.h>

struct Student {
    char name[50];
    char rollNo[20];
    int totalMarks;
};

void readStudent(struct Student *s) 
{
    printf("Enter student name: ");
    scanf("%s", s->name);

    printf("Enter roll number: ");
    scanf("%s", s->rollNo);

    printf("Enter total marks obtained: ");
    scanf("%d", &s->totalMarks);
}

void displayStudent(struct Student *s) 
{
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s->name);
    printf("Roll Number: %s\n", s->rollNo);
    printf("Total Marks: %d\n", s->totalMarks);
}

int main() 
{
    struct Student student;
    readStudent(&student);
    displayStudent(&student);

    return 0;
}