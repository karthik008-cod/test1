#include<stdio.h>
int main(){
    int r1;
    int c1;
    printf("Enter the no.of Rows of Matrix 1: ");
    scanf("%d",&r1);
    printf("Enter the no.of Columns of Matrix 1: ");
    scanf("%d",&c1);
    int arr1[r1][c1];
    int r2;
    int c2;
    printf("Enter the no.of Rows of Matrix 2: ");
    scanf("%d",&r2);
    printf("Enter the no.of Columns of Matrix 2: ");
    scanf("%d",&c2);
    int arr2[r2][c2];
    if(r1==r2 && c1==c2){
    for(int i=1;i<=r1;i++){
        for(int j=1;j<=c1;j++){
            printf("Enter the number in (%d,%d) of Matrix 1: ",i,j);
            scanf("%d",&arr1[i-1][j-1]);
        } 
    }
    for(int r=1;r<=r2;r++){
        for(int c=1;c<=c2;c++){
            printf("Enter the number in (%d,%d) of Matrix 2: ",r,c);
            scanf("%d",&arr2[r-1][c-1]);
        } 
    }
    // for(int m=1;m<=r1;m++){
    //     for(int n=1;n<=c1;n++){
    //         printf("%d ",arr1[m-1][n-1]);
    //     }
    //     printf("\n");
    // }
    // printf("\n\n");
    // for(int x=1;x<=r1;x++){
    //     for(int y=1;y<=c1;y++){
    //         printf("%d ",arr1[x-1][y-1]);
    //     }
    //     printf("\n");
    // }
    printf("\n\n");
    for(int u=1;u<=r1;u++){
        for(int v=1;v<=c1;v++){
            printf("%d  ",arr1[u-1][v-1]+arr2[u-1][v-1]);
        }
        printf("\n");
    }
    }
    else printf("To add matrices, both matrices must have the same number of rows and columns.");
    return 0;
}