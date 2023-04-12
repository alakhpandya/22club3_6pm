#include<stdio.h>
/*
Write a program that takes percentage (int) & height (float) of 5 students & print them all.
*/
/*
int main()
{
    int s[5][2], i, j;
    printf("Enter details:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("Percentage & Height of Student-%d:\n", i);
        for ( j = 0; j < 2; j++)
        {
            scanf("%d", &s[i][j]);
        }
    }
    for ( i = 0; i < 5; i++)
    {
        printf("Percentage & Height of Student-%d:\n", i);
        for ( j = 0; j < 2; j++)
        {
            printf("%d\n", s[i][j]);
        }
    }
    return 0;
}
*/


/*
Primary/Premitive Data Types:
int, long int, long long int, float, double, long double, char

Derived Data Types:
arrays, strings

User Defined Data Types:
structures
*/

/*
Write a program that takes percentage (int) & height (float) of 5 students & print them all.
*/

#include<stdio.h>
/*
int main()
{
    struct student{
        int percentage;
        float height;
    };

    struct student a;
    // a.percentage = 80;
    // a.height = 171.5;
    printf("Enter following details of a:\n");
    printf("Percentage: ");
    scanf("%d", &a.percentage);
    printf("Height: ");
    scanf("%f", &a.height);

    printf("\n\nDetails of a:\n");
    printf("Percentage: %d\n", a.percentage);
    printf("Height: %.2f", a.height);


    return 0;
}
*/
#define gravity 9.8

struct student{
    // char name[20];
    int percentage;     // 2 Bytes
    float height;       // 4 B
} p1, p2, p3, b[5];

void func1(){
    struct student s1;
    // a[1].height;
    printf("%.2f", gravity);
}

int main()
{
    // struct student p1, p2, p3;
    struct student a[3];
    int i, roll_no;
    // s1.height
    for(i = 0; i < 3; i++){
        printf("Enter following details of student-%d:\n", i);
        printf("Name: ");
        fflush(stdin);
        gets(a[i].name);
        printf("Percentage: ");
        scanf("%d", &a[i].percentage);
        printf("Height: ");
        scanf("%f", &a[i].height);
    }

    printf("\nEnter student no: ");
    scanf("%d", &roll_no);

    printf("\nDetails of student-%d:\n", roll_no);
    printf("Name: %s\n", a[roll_no].name);
    printf("Percentage: %d\n", a[roll_no].percentage);
    printf("Height: %.2f", a[roll_no].height);
    return 0;
}


// HW (tobe submitted to- dishantshah1417@gmail.com on or before 11 Apr midnight with subject: 22CLUB3_6PM_C)
/*
1. Write a program to store and print the roll no., name , age and marks of a student using structures.

2. Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 2.

3. Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. given by user.

4. Write a program to add two distances in inch-feet using structure. The values of the distances is to be taken from the user.

5. Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student in a tabular form.
eg:
RollNo  Chem    Maths   Phy     Percentage
1       75      85      50      70

6. Write a program to add, subtract and multiply two complex numbers using structures.
*/