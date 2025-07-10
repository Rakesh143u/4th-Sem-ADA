#include<stdio.h>
void prims(int n,int cost[100][100],int src){
    int min,u,s[100],p[100],d[100],k,t[100][100],sum=0;
    for(int i=1;i<=n;i++){
        s[i]=0;
        d[i]=cost[src][i];
        p[i]=src;

    }
    s[src]=1;
    k=1;
    for(int i=1;i<=n-1;i++){
        min=999;
        u=0;
        for(int j=1;j<=n;j++){
            if(s[j]==0&&d[j]<=min){
                min=d[j];
                u=j;
            }

        }
        if(u==0) break;
        t[k][1]=u;
        t[k][2]=p[u];
        k=k+1;
        sum=sum+cost[u][p[u]];
        s[u]=1;
        for(int v=1;v<=n;v++){
            if(s[v]==0&&cost[u][v]<d[v]){
                d[v]=cost[u][v];
                p[v]=u;
            }
        }

        
    }
    if(sum>=999){
        printf("Spamming tree doesn't exist\n");
    }else{
        printf("Spamming tree is\n");
        for(int i=1;i<=n-1;i++){
            printf("%d-%d\n",t[i][1],t[i][2]);
        }
        printf("The cost of minimal spamming tree is %d\n",sum);
    }
}
void main(){
    int n,cost[100][100],src;
    printf("Enter number of vertices\n");
    scanf("%d",&n);
    printf("Enter the cost adjacency matrix\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&cost[i][j]);
        }
    }
    printf("Enter the src\n");
    scanf("%d",&src);
    prims(n,cost,src);
}