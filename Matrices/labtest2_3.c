#include <stdio.h>
int main() {
    int r;
    int c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    int transpose[c][r];

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            transpose[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < c; i++){    
        for (int j = 0; j < r; j++) {
            printf("%d ", transpose[i][j]);
            if (j == r - 1){
                printf("\n");
            }
        }
    }
    return 0;
}