// Write a function that prints the factorial of the integer given in its argument.

#include<stdio.h>
int factorial(int a)
{
    int i,fact=1;
    for(i=1;i<=a;i++)
    {
        fact = fact * i;
    }
    // printf("%d! = %d\n", a, fact);
    return fact;
}

int main()
{
    // Ask two integers from user and print sum of their factorials:
    int p, q, r, factorial_of_p;
    printf("Enter two integers:\n");
    scanf("%d%d", &p, &q);  // 7
    r = factorial(p) + factorial(q);
    // factorial_of_p = factorial(p);
    printf("sum = %d", r);
    return 0;
}
/*
1. Ask two integers from user, add their factroials. Now ask two more integers from user and add their factorials too. calculate average of the factorials you computed. Now finally ask one last integer from user and add its factorial to the average.
2. Write a function that prints whether the number passed in its argument is prime or not. Using a main program pass the number given by the user to that function.


HW:
3. Write a function to find average of 5 given numbers and a main program that takes 5 integers from user, uses the factorial function to find factorial of each one of them and using average function prints the average of factorials of them.

4. Make a program that uses a function to find nth term of an arithmetic progression whose first term is a & common difference is d.
    ap:
    first term = a = 5
    difference = d = 4
    ap = 5, 9, 13, 17, 21, 25,...
    nth term = a + (n-1)d

5. Develop a program that uses a function to find nth term of an geometric progression whose first term is 'a' & common ratio is 'r'.

6. Make a function that checks whether the given number is a perfect number or not. Make a program that uses this function to print all the perfect numbers between a given range. A perfect number is one whose all factors (excluding itself), when added up, you get the number itself. eg, factors of 6: 1, 2, 3, 6 & 1+2+3 = 6. so 6 is a perfect number.

7. Write a function that determines whether the number given in its argument is a Prime number or not. Build a main program that takes two integers from user and print all the Prime numbers between those two integers using that function.

8. Write a function that determines whether the number given in its argument is Armstrong number or not. Build a main program that takes two integers from user and print all the Armstrong numbers between those two integers using that function.
*/