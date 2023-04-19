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
    float real, imag;
};

struct complex cScan(){
    struct complex c;
    printf("Real Part: ");
    scanf("%f", &c.real);
    printf("Imaginary Part: ");
    scanf("%f", &c.imag);
    return c;
}

void cPrint(struct complex c){
    printf("%.3f + (%.3fi)", c.real, c.imag);
}

struct complex cAdd(struct complex c1, struct complex c2){
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
    c1 = cScan();
    printf("c1: ");
    cPrint(c1);

    printf("Enter second complex number:\n");
    c2 = cScan();
    printf("c2: ");
    cPrint(c2);

    printf("Operation (+, -, * or /): ");
    scanf(" %c", &op);
    switch(op){
        case '+':
            // ans.real = c1.real + c2.real;
            // ans.imag = c1.imag + c2.imag;
            ans = cAdd(c1, c2);
            break;
        case '-':
            // ans.real = c1.real - c2.real;
            // ans.imag = c1.imag - c2.imag;
            ans = cSub(c1, c2);
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