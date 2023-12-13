#include <stdio.h>
void main()
{
    struct student
    {
        int rollno;
        int m1, m2, m3;
        int total;
    };
    int n, i;
    int fun(int, int, int);
    printf("enter the number of students");
    scanf("%d", &n);
    struct student s[n];
    for (i = 0; i < n; i++)
    {
        printf("entre the student roll number and marks");
        scanf("%d", &s[i].rollno);
        scanf("%d", &s[i].m1);
        scanf("%d", &s[i].m2);
        scanf("%d", &s[i].m3);
        s[i].total = (s[i].m1 + s[i].m2 + s[i].m3);
    }
    printf("*****STUDENTS DETAILS*****");
    for (i = 0; i < n; i++)
    {
        printf("rollno:%d\n", s[i].rollno);
        printf("mark1:%d\n", s[i].m1);
        printf("mark2:%d\n", s[i].m2);
        printf("mark3:%d\n\n", s[i].m3);
        printf("total:%d\n\n", s[i].total);
    }
}
