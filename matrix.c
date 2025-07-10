#include<stdio.h>
#include<stdlib.h>
void multiply(int r1,int c1,int c2,int A[r1][c1],int B[c1][c2],int C[r1][c2]){
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int sum=0;
            for(int k=0;k<c1;k++){
                sum+=A[i][k]*B[k][j];
            }
            C[i][j] =sum;
        }
    }
}
int main(){
    int r1,c1,r2,c2,i,j;
    int A[r1][c1], B[r2][c2], C[r1][c2];
    printf("enter the rows and columns of matrix A\n");
    scanf("%d\n%d\t",&r1,&c1);
    printf("enter the elements of matrix A\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d\t",A[i][j]);
        }
    }
    printf("enter the rows and columns of matrix B\n");
    scanf("%d\n%d\t",&r2,&c2);
    printf("enter the elements of matrix B\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d\t",B[i][j]);
        }
    }
    multiply(r1, c1, c2, A, B, C);
    printf("the result is =\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
    return 0;

}