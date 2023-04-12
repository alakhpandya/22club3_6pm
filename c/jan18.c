// #include<stdio.h>

// int main()
// {
    // for loop, while loop, do while loop
    // when you know number of iteration already, use for loop
    // when you don't know number of iterations, use while loop
    
    // count number of digits of an integer: 1583
    // 1583 / 10    = 158
    // 158 / 10     = 15
    // 15 / 10      = 1
    // 1 / 10       = 0

    // int i, a ,b;
    // while (a > b){
    //     // code
    // }

    // for ( i = 0; i < 5; i++)
    // {
    //     /* code */
    // }
    
    // for ( i = 5; i > 0; i--)
    // {
    //     /* code */
    // }

    // do{
    //     // code
    // }while(a > b);
    
//     return 0;
// }
/*
1. Perfect No: 
10: 1 + 2 + 5 = 8
30: 
28: 
// 1. Write a C program that takes an integer from user & prints if it is perfect number or not.
// 2. Update the above program so that you ask two numbers from user & print all the perfect numbers between them
// 3. Write a C program that takes a 3-digit integer from user & prints whether it is an Armstrong number or not.
    * 3-digit Armstrong number: 243: (2^3) + (4^3) + (3^3) = 8 + 64 + 27 = 99, 371: (3^3)+(7^3)+(1^3)=27+343+1=371.
    * 4-digit Armstrong number: 1243: (1^4) + (2^4) + (4^4) + (3^4)
*/
/*
#include<stdio.h>
int main(){
    int a, b, num,rem,sum,i;
    
    printf("Enter Two Numbers:");
    scanf("%d%d",&a, &b);   // a = 50, b = 100
    printf("Perfect numbers between %d & %d are:\n", a, b);
    for(num = a; num <= b; num++)
    {   
        sum = 0;
        // adding all the factors of num        num = 50, 51
        for(i=1;i<num;i++){
            rem=num%i;
            if(rem==0){
                sum=sum+i;      
            }
        }
        // sum = 1 + 2 + 5 + 10 + 25 = 43
        if(sum==num){
            printf("%d\n",num);
        }
    }
    return 0;
}
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int n, i, power=0, temp, digit, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    // count the number of digits
    temp = n;
    while (n > 0){
        n /= 10;
        power++;
    }

    n = temp;
    // calculating sum of powers of digits
    while (n > 0){
        digit = n % 10;
        sum += pow(digit, power);
        n /= 10;
    }

    n = temp;
    // checking Armstrong
    if (sum == n){
        printf("Armstrong.");
    }
    else{
        printf("Not Armstrong.");
    }

    return 0;
}