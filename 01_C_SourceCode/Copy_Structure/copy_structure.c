#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int id;
    char grade;
};

int main()
{
    struct Structure s1 = {1 , 'A'};

    // Create a copy of strudent s1
    struct Strudent s1c = s1;

    printf("Student 1 ID: %d\n", s1c.id);
    printf("Student 1 Grade: %c", s1c.grade);
    return 0;
}