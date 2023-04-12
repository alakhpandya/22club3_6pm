#include<stdio.h>

/*
int main()
{
    // string: character array
    char a[20];
    int i, l;
    printf("Length of your first name: ");
    scanf("%d", &l);
    printf("Enter your first name:\n");
    for ( i = 0; i < l; i++)
    {
        // fflush(stdin);
        scanf(" %c", &a[i]);
    }
    // printf("\ni = %d", i);
    a[i] = '\0';
    printf("\nYour first name is: %s", a);
    // for ( i = 0; i < l; i++)
    // {
    //     printf("%c", a[i]);
    // }
    return 0;
}


int main(){
    char firstName[20];
    printf("First Name: ");
    scanf("%s", firstName);
    printf("Hello %s!", firstName);
    return 0;
}
*/
/*
int main(){
    int n;
    char name[20];
    printf("Guess a number: ");
    scanf("%d", &n);
    fflush(stdin);
    gets(name);
    printf("Hello %s!", name);
    return 0;
}
*/

// string functions
#include<string.h>

int main(){
    char firstName[20], lastName[20], fullName[40];
    int count = 0, i=0;
    fflush(stdin);
    printf("First Name: ");
    gets(firstName);
    printf("Last Name: ");
    gets(lastName);

    // Getting length of the string
    /*
    while (1){
        if (firstName[i] == '\0'){
            break;
        }
        else{
            count++;
        }
        i++;
    }
    count = strlen(firstName);
    printf("No of characters in (length of) your name: %d", count);
    */

    // comparing two strings
    // printf("%d", strcmp(firstName, lastName));
    /*
    if (strcmp(firstName, lastName) == 0){
        printf("You have got a strange name!");
    }
    printf("\nHello %s %s!", lastName, firstName);
    */

    // Concatenating two strings
    /*
    // strcat(firstName, lastName);
    strcat(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);
    printf("Full name: %s", fullName);
    */


    // copying a string into another
    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);
    printf("Full name: %s", fullName);
    
    return 0;
}