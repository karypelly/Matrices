#include <stdio.h>
#include <stdlib.h>

int main (){
    int m, n;
    scanf("%d %d", &m, &n);
    int arr[m][n];
    int col1, row1;
    for (row1 = 0; row1 < m; row1++){
        for (col1 = 0; col1 < n; col1++){
            scanf("%d", &arr[row1][col1]);
        }
    }
    int m2, c;
    scanf("%d %d", &m2, &c);
    int arr2[m2][c];
    int col2, row2;
    for (row2 = 0; row2 < m2; row2++){
        for (col2 = 0; col2 < c; col2++){
            scanf("%d", &arr2[row2][col2]);
        }
    }
    if (m >= m2 && n <= c){
        for (int k = 0; k < m2; k++){
            for (int j = 0; j < n; j++){
                printf("%d ", arr[k][j] + arr2[k][j]);
            }
            printf("\n");
        }
        exit(0);
    }
    if (m2 >= m && n <= c){
        for (int k = 0; k < m; k++){
            for (int j = 0; j < n; j++){
                printf("%d ", arr[k][j] + arr2[k][j]);
            }
            printf("\n");
        }
        exit(0);
    }
    if (m >= m2 && n >= c){
        for (int k = 0; k < m2; k++){
            for (int j = 0; j < c; j++){
                printf("%d ", arr[k][j] + arr2[k][j]);
            }
            printf("\n");
        }
        exit(0);
    }
    if (m2 >= m && n >= c){
        for (int k = 0; k < m; k++){
            for (int j = 0; j < c; j++){
                printf("%d ", arr[k][j] + arr2[k][j]);
            }
            printf("\n");
        }
        exit(0);
    }
    return 0;
}