#include<stdio.h>
void warshall(int n,int a[100][100]){
    int p[100][100];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            p[i][j]=a[i][j];
        }
    }
    for(int k=1;k<=n;k++)
{
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(p[i][j]==0){
                if(p[i][k]==1 && p[k][j]==1){
                    p[i][j]=1;
                }
            }
        }
    }
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        printf("%d",p[i][j]);
    }
    printf("\n");
}
}
void main(){
    int n,a[100][100];
    printf("Enter the size of matrix\n");
    scanf("%d",&n);
    printf("Enter the adjacency matrix\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        scanf("%d",&a[i][j]);
    }
}
warshall(n,a);
}