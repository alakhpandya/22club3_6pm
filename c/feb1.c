/*
1. Write a program in C to find the biggest and the smallest elements in an array.
2. Write a program in C to find the second smallest element in an array.
3. Write a program in C for addition of two arrays of same size.
4. Write a program in C to print all unique elements in an array. (those elements which are not repeating.)
5. Write a program in C to count the frequency of each element of an array. (frequency means number of times an element is OCCURRING in the array)
6. Write a C program to print the number of duplicate elements in an array. (Elements those are occurring more than once)
7. Write a program in C to delete an element at desired position from an array.
    example:
    a = [1,2,3,4,5,6,7,8]
    index no of the element to be deleted: 3
    output:
    1,2,3,5,6,7,8
*/

#include<stdio.h>
#define SIZE 10

int main()
{
    int a[SIZE], b[SIZE];
    int i, j = 0, smallest, second_smallest;


    // Scanning the inputs
    printf("Enter %d integers:\n", SIZE);
    for(i = 0; i < SIZE; i++){
        scanf("%d", &a[i]);
    }

    smallest = a[0];
    for(i = 1; i < SIZE; i++){
        if(a[i] < smallest){
            smallest = a[i];
            b[j] = a[i];
            j++;
        }
    }

    // printing array
    /*
    for(i = 0; i < j; i++){
        printf("%d ", b[i]);
    }
    */
    second_smallest = b[j-2];

    /*
    second_smallest = a[0];
    for(i = 1; i < SIZE; i++){
        if(a[i] != smallest){
            if(a[i] < second_smallest){
                second_smallest = a[i];
            }
        }
    }
    */

    printf("Second smallest number = %d", second_smallest);
    return 0;
}