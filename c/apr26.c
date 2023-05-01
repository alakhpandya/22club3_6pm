#include<stdio.h>
/*
int main()
{
    int a;
    int *pa;
    // a = 25;
    pa = &a;
    printf("Enter a: ");
    scanf("%d", &a);
    // & : Address Operator
    // &a : Address of a
    printf("a = %d\n", a);
    printf("Address of a (in decimal) = %d\n", &a);
    printf("Address of a (in hex) = %x\n", &a);
    printf("Address of a (as address) = %p\n", &a);
    printf("Address of a (as address through pointer) = %p\n", pa);
    
    printf("\nvalue of a = %d\n", a);
    printf("value of a using pointer = %d\n", *pa);
    // * : Reference Operator
    return 0;

}
*/
/*
Write a code to take two inputs from user (1 int & 1 float). Store their addresses in two different pointer variables and print them on seperate lines with proper labels.
*/

// Write a program to take two integers from user and print their sum. Do everything using pointers.

int main(){
    int a, b, sum, *pa, *pb, *psum;
    float f, *pf = &f;
    char c, *pc = &c;
    pa = &a;
    pb = &b;
    psum = &sum;
    // int a, b, *pa = &a, *pb = &b;

    printf("Enter two integers:\n");
    scanf("%d%d", pa, pb);
    
    *psum = *pa + *pb;

    printf("sum = %d\n", *psum);

    printf("\npa = %p\n", pa);
    printf("pb = %p\n", pb);
    printf("pc = %p\n", pc);

    pa++;
    // pa += 2;
    pb++;
    pc++;

    printf("\npa = %p\n", pa);
    printf("pb = %p\n", pb);
    printf("pc = %p\n", pc);

    return 0;
}
