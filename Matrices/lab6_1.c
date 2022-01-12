#include <stdio.h>
int main(void){
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    int col, row;
    for (row = 0; row < r; row++){
        for (col = 0; col < c; col++){
            scanf("%d", &arr[row][col]);
        }
    }
    int i, j;
    int countDec = 0;
    int countAsc = 0;
    for (i = 0; i < c; i++) {
		for (j = 0; j < r; j++) {
            if (j > 0){
                if (arr[j][i] < arr[j - 1][i]) {
                    countDec++;
                } else if (arr[j][i] > arr[j - 1][i]){
                    countAsc++;
                }
                
            }
        }
    }
    if ((countDec == ((r - 1) * c)) || (countAsc == ((r - 1) * c))){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
}