#include <stdio.h>
int main()
{
    union student
    {
        int rollno;
        char name[50];
        float avg;
    };
    int n, i;
    union student s;
    printf("enter the student rollno\n");
    scanf("%d", &s.rollno);
    printf("student rollno:%d\n", s.rollno);
    printf("enter the studentname\n");
    scanf("%s", s.name);
    printf("student name:%s\n", s.name);
    printf("enter the student average\n");
    scanf("%f", &s.avg);
    printf("average:%f\n", s.avg);
    return 0;
}
