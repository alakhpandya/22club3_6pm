#include<stdio.h>

int main()
{
    // int b, i, j;                   // declare
    // b = 5;                  // define
    // int c[5] = {1,2,3,4,5};  // initialize
    // int a[5][3] = {{1,2,3}, {11,12,13}, {21,22,23}, {31,32,33}, {41,42,43}};
    printf("Marks of subject-2 of student-3: %d", a[3][2]);
    for(j=0; j<5; j++){
        printf("\nMarks of all the subjects of student-%d are:\n", j);
        for(i=0; i<3; i++){
            printf("%d\t", a[j][i]);
        }
    }
    // printf("\nMarks of all the subjects of student-1 are:\n");
    // for(i=0; i<3; i++){
    //     printf("%d\t", a[1][i]);
    // }
    // printf("\nMarks of all the subjects of student-2 are:\n");
    // for(i=0; i<3; i++){
    //     printf("%d\t", a[2][i]);
    // }
    // printf("\nMarks of all the subjects of student-3 are:\n");
    // for(i=0; i<3; i++){
    //     printf("%d\t", a[3][i]);
    // }
    // printf("%d\t", a[3][0]);
    // printf("%d\t", a[3][1]);
    // printf("%d\t", a[3][2]);

    // printf("\nMarks of all the subjects of student-4 are:\n");
    // for(i=0; i<3; i++){
    //     printf("%d\t", a[4][i]);
    // }


    // Write a line of code that prints marks of student-2 for subject-1
    // printf("\n\n%d", a[2][1]);



    // Taking values from user & storing them in a 2D array:

    int a[5][3], i, j;
    for(i=0; i<5; i++){
        printf("Enter marks of student-%d\n", i);
        for(j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    return 0;
}

/*
1. Write a program that takes marks of 5 students for 3 subjects and stores them in a 2D array. Now ask user whose marks for which subject does she want to print and print marks of only that subject of that student.
2. Write a program that takes 9 integers from user and stores them in a 3x3 array. Print that array in a way so it looks like a 3x3 matrix.
3. Write a program that takes two 3x3 arrays from the user. Add both the arrays & store them in the third array. Print the third array.
4. Write a program that takes two 3x3 arrays from the user. Multiply both the matrices & store them in the third array. Print the third array.
5. Write a program that takes a 3x3 matrix from user. Find its determinant and print it.
6. Write a program that takes a 3x3 matrix from user. Find its inverse using Gauss-Jordan method and print it.
*/