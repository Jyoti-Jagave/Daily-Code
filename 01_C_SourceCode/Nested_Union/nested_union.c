#include <stdio.h>

// different data types
union Student
{
    int rollNo;
    union Academic
    {
        int marks;

    } performance;

};

int main()
{
   // Declare a  union variable
   union Student abc;

   // Assign and print the
   abc.rollNo = 21;  
   printf("%d\n", abc.rollNo);

   // Assign and print 
   abc.performance.marks = 91;
   printf("%d", abc.performance.marks);
   return 0;

}