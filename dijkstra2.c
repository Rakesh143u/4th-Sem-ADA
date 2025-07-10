#include<stdio.h>
void dijkstra(int n,int cost[100][100],int src,int dest,int s[],int d[],int p[]){
    int min,u;
    s[src]=1;
    for(int i=1;i<=n-1;i++){
        min=999;
        u=0;
        for(int j=1;j<=n;j++){
            if(s[j]==0&&d[j]<=min){
                min=d[j];
                u=j;
            }
        }
        
        
        s[u]=1;
        for(int v=1;v<=n;v++){
            if(s[v]==0&&d[u]+cost[u][v]<d[v]){
                d[v]=d[u]+cost[u][v];
                p[v]=u;
            }
        }
    }
}
void printpath(int src,int dest,int d[],int p[]){
    int i;
    if(d[dest]>=999){
        printf("No path exists\n");
    }else{
    i=dest;
    while(i!=src){
        printf("%d<-",i);
        i=p[i];
    }
    
    printf("%d=%d",src,d[dest]);
    printf("\n");
}
}

void main(){
    int n,cost[100][100],dest,src,s[100],d[100],p[100];
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the cost adjacent matrix\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&cost[i][j]);
        }
    }
    printf("Enter the src\n");
    scanf("%d",&src);
   
    for(int i=1;i<=n;i++){
        
        s[i]=0;
        d[i]=cost[src][i];
        p[i]=src;
    }
    
    dijkstra(n,cost,src,dest,s,d,p);
    printf("The shortest path and dest from %d to \n",src);
    for(int dest=1;dest<=n;dest++){
    printpath(src,dest,d,p);
    }

 }