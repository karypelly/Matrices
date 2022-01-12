#include<stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    int c, d, a[10][10], b[10][10], n, temp;
    int sum = 0;
    int count = 0;
    int diag = 0;
    printf("\nEnter the dimension of the matrix: \n\n");
    scanf("%d", &n);

    printf("\nEnter the %d elements of the matrix: \n\n",n*n);
    for(c = 0; c < n; c++) // to iterate the rows
        for(d = 0; d < n; d++) // to iterate the columns
            scanf("%d", &a[c][d]);

    // printing the original matrix
    printf("\n\nThe original matrix is: \n\n");
    for(c = 0; c < n; c++)   // to iterate the rows
    {
        for(d = 0; d < n; d++)   // to iterate the columns
        {
            printf("%d\t", a[c][d]);
        }
    printf("\n");
    }


    for(c = 0; c < n; c++){
        for(d = 0; d < n; d++){
            sum += abs(a[c][d]);
            if (c == d){
                sum -= abs(a[c][d]);
                diag = abs(a[c][d]);
            } 
        }
        if (diag >= sum){
            count++;
            sum = 0;
        }  
        
    }   
    if (count == n){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
}