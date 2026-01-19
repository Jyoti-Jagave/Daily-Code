#include <stdio.h>
#include <stdlib.h>

struct Date{
    int day;
    int month;
    int year;
};

int main(void)
{
    int N = 5;
    int i;
    int dd, mm, yy;

    struct Date* pDate = (struct Date*)malloc(N * sizeof(struct Date));
    if(pDate == NULL)
    {
        puts("Error in allocating memory");
        exit (-1);
    }

    i = 0;
    while(i < N)
    {
        (*(pDate + i)).day = 1;
        (*(pDate + i)).month = 1;
        (*(pDate + i)).year = 1970;
        i = i + 1;
        
    }

    i = 0;
    while(i < N)
    {
        (pDate + i)->day = 1;
        (pDate + i)->month = 1;
        (pDate + i)->year = 1970;
        i = i + 1;
    }

    i = 0;
    while(i < N)
    {
        dd = (*(pDate + i)).day;
        mm = (*(pDate + i)).month;
        yy = (*(pDate + i)).year;
        i = i + 1;
    }

    i = 0;
}