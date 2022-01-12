#include <stdio.h>
int main(void){
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    int col, row;
    int i;
    for (row = 0; row < r; row++){
        for (col = 0; col < c; col++){
            scanf("%d", &arr[row][col]);
        }
    }
    int sum = 0;
    int Sum = 0;
    for(row = 0; row < r; row++){
       Sum = Sum + arr[row][c - row - 1];
       for (col = 0; col < c; col++){
           if (row == col){
                sum = sum + arr[row][col];
            }
       }
    }
    printf("The Sum of Opposite Diagonal Elements of a Matrix = %d\n", sum );
    printf("The Sum of Anti Diagonal Elements of a Matrix = %d\n", Sum );
 	return 0;
}