#include<stdio.h>
void floyde(int n,int d[100][100]){
    
    
    for(int k=1;k<=n;k++)
{
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            
                if(d[i][k]+d[k][j]<d[i][j]){
                    d[i][j]=d[i][k]+d[k][j];
                }
        
    }
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        printf("%d\t",d[i][j]);
    }
    printf("\n");
}
}
}
void main(){
    int n,cost[100][100],d[100][100];
    printf("Enter the size of matrix\n");
    scanf("%d",&n);
    printf("Enter the adjacency matrix\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        scanf("%d",&cost[i][j]);
        d[i][j]=cost[i][j];
    }
}
floyde(n,d);
}