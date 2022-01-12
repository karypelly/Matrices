#include <stdio.h>
int main(void){
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int col, row;
    int i;
    for (row = 0; row < n; row++){
        for (col = 0; col < n; col++){
            scanf("%d", &arr[row][col]);
        }
    }


    int k = 0;
    while (k < n){
        for (int a = 0; a < n; a++){
            for(int b = 0; b < n; b++){
                if (a + k == b){
                    printf("%d ", arr[a][b]);
                    
                }
            }
        }
        k++;
    }    
}