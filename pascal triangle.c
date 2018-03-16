#include <stdio.h>

void main()
{
    int arr[50][50], range,i,j;
    
    printf("Enter the range ");
    scanf("%d",&range);
    for (i=0; i<=range;i++){
        for (j=0; j<=i;j++){
            if (j == 0 || j == i) {
                arr[i][j] = 1;
                printf("1 ");
                continue;
            }
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }    
}