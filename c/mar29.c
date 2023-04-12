#include<stdio.h>
void login(char uName[20], char pwd[20]){
    char name[20], pass[20];
    // validate username & password
    // name: alak, pass: 1234 / name: Alakh, pass: 123 / name: Alak, pass: 123 / name: Alakh, pass: 1234
}

int main()
{
    char username[20], password[20];
    // username = Alakh, password = 1234

    // Please login by entering the same user name & password again to perform operations.
    login(username, password);
    return 0;
}