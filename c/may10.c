/*
Modes:
r: read - only reading file is allowed, does not create file, does not erase the content
w: write - only write into the file, creates the file if it does not exist. Erases the content of the file at the time of opening
a: append - only write into the file, creates the file if it does not exist. Does not erase the content. Writing starts from the end of the file.

r+: read plus: Allows reading + writing. does not create file, does not erase the content. Reading/Writing will start from the begining of the file.
w+: write plus: Allows reading + writing. creates the file if it does not exist. Erases the content of the file at the time of opening. Reading/Writing will start from the begining of the file.
a+: append plus: Allows reading + writing. creates the file if it does not exist, does not erase the content. Reading/Writing will start from the end of the file.
*/

#include<stdio.h>

int main()
{
    // int i;
    // char fName[20], lName[20], first_name[20], last_name[20], c;
    // FILE *fTemp;
    
    // for(i = 0; i < 5; i++){ 
    //     // Taking inputs
    //     printf("First Name: ");
    //     gets(fName);
    //     printf("Last Name: ");
    //     gets(lName);
        
    //     // storing in file
    //     fTemp = fopen("temp.txt", "a");
    //     fputs(fName, fTemp);
    //     fputs("\t", fTemp);
    //     fputs(lName, fTemp);
    //     fputs("\n", fTemp);
    //     fclose(fTemp);
    // }

    // fTemp = fopen("temp.txt", "r+");
    /*
    fgets(first_name, 20, fTemp);
    printf("Name: %s", first_name);
    fgets(first_name, 20, fTemp);
    printf("Name: %s", first_name);
    fgets(first_name, 20, fTemp);
    printf("Name: %s", first_name);
    fgets(first_name, 20, fTemp);
    printf("Name: %s", first_name);
    fgets(first_name, 20, fTemp);
    printf("Name: %s", first_name);
    printf("New first name: ");
    gets(first_name);

    fgets(first_name, 20, fTemp);
    printf("Name: %s", first_name);
    */

    /*
    printf("First Name: ");
    gets(fName);
    printf("Last Name: ");
    gets(lName);

    // fseek(fTemp, 4, SEEK_SET);
    // fseek(fTemp, -4, SEEK_END);
    // fseek(fTemp, 4, SEEK_CUR);
    // fseek(fTemp, -4, SEEK_CUR);

    fseek(fTemp, 0, SEEK_END);
    
    fputs(fName, fTemp);
    fputs("\t", fTemp);
    fputs(lName, fTemp);
    fputs("\n", fTemp);
    fclose(fTemp);
    */

    // getw() is used to get an integer from the file & putw() is used to write an integer into the file. syntax: getw(filePointer), putw(integer, filePointer)

    int i;
    FILE *fp;
    char num;
    fp = fopen("temp2.txt", "a");
    // fseek(fp, 0, SEEK_SET);
    putw(5, fp);
    // for(i = 0; i < 3; i++){
        // num = getw(fp);
        // fseek(fp, 1, SEEK_CUR);
        // printf("%c", num);
    // }
    fclose(fp);
    return 0;
}