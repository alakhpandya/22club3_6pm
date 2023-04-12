#include<stdio.h>
#define SIZE 3
int main()
{
    float a[SIZE][SIZE], id[SIZE][SIZE];
    float temp;
    int i, j, k;

    printf("Enter %d numbers:\n", SIZE*SIZE);
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            printf("a[%d][%d]: ", i, j);
            scanf("%f", &a[i][j]);
            if(i == j){
                id[i][j] = 1;
            }
            else{
                id[i][j] = 0;
            }
        }
    }

    for(i = 0; i < SIZE; i++){
        if (a[i][i] == 0){
            for(j = i+1; j < SIZE; j++){
                if (a[j][i] != 0){
                    // swap row-j with row-0 
                    for(k = 0; k < SIZE; k++){
                        temp = a[i][k];
                        a[i][k] = a[j][k];
                        a[j][k] = temp;
                    }
                    for(k = 0; k < SIZE; k++){
                        temp = id[i][k];
                        id[i][k] = id[j][k];
                        id[j][k] = temp;
                    }
                    break;
                }
            }
        }
    
        // Getting 1 in col-i
        temp = a[i][i];
        for (j = 0; j < SIZE; j++)
        {
            a[i][j] = a[i][j] / temp;
            id[i][j] = id[i][j] / temp;
        }

        // Getting 0s in col-0

        for(k = 0; k < SIZE; k++){
            if (k != i){
                temp = a[k][i];
                for ( j = 0; j < SIZE; j++)
                {
                    a[k][j] = a[k][j] - (a[i][j] * temp);
                    id[k][j] = id[k][j] - (id[i][j] * temp);

                    // a[2][j] = a[2][j] - (a[0][j] * temp);
                    // id[2][j] = id[2][j] - (id[0][j] * temp);
                }
            }
        }

    }


    // Printing both the matrix
    printf("Matrix A:\n");
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            printf("%.2f\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix ID:\n");
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            printf("%.2f\t", id[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// Next Class: strings/character arrays