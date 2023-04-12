/*              Real    Imaginary
c = x + yi      x       y
c1 = 5 + 7i     5       7
c2 = 3 - 4i     3       -4
c3 = 7i + 8     8       7
c4 = 5i - 7     -7      5
c5 = 6i         0       6

Addition:

c1 + c2 = (5 + 7i) + (3 - 4i)
        = 8 + 3i
        = (a + bi) + (p + qi)
        = (a + p) + (b + q)i
*/

#include<stdio.h>
struct complex{
    int real, imag;
};

struct complex add(struct complex c1, struct complex c2){
    struct complex c;
    c.real = c1.real + c2.real;
    c.imag = c1.imag + c2.imag;
    return c;
}


int main()
{
    struct complex c1, c2, ans;
    char op;

    printf("Enter first complex number:\n");
    printf("Real Part: ");
    scanf("%d", &c1.real);
    printf("Imaginary Part: ");
    scanf("%d", &c1.imag);
    printf("c1: %d + (%di)", c1.real, c1.imag);

    printf("Enter second complex number:\n");
    printf("Real Part: ");
    scanf("%d", &c2.real);
    printf("Imaginary Part: ");
    scanf("%d", &c2.imag);
    printf("c2: %d + (%di)", c2.real, c2.imag);

    printf("Operation (+, -, * or /): ");
    scanf(" %c", &op);
    switch(op){
        case '+':
            // ans.real = c1.real + c2.real;
            // ans.imag = c1.imag + c2.imag;
            ans = add(c1, c2);
            break;
        case '-':
            ans.real = c1.real - c2.real;
            ans.imag = c1.imag - c2.imag;
            break;
        case '*':
            ans.real = (c1.real*c2.real - c1.imag*c2.imag);
            ans.imag = (c1.real*c2.imag + c1.imag*c2.real);
            break;
        case '/':
            ans.real=((c1.real*c2.real)-(c1.imag*c2.imag))/(c2.real*c2.real+c2.imag*c2.imag);
            ans.imag=((c1.real*c2.imag)-(c1.imag*c2.real))/(c2.real*c2.real+c2.imag*c2.imag);
            break;
        default:
            printf("Invalid Operation, please try again...");
    }

    printf("\nAnswer: %d + (%di)", ans.real, ans.imag);
    return 0;
}