#include<stdio.h>
#define qsize 20
void bfs(int n,int a[20][20],int src,int t[20][20],int s[20],int q[20]){
    s[src]=1;
    int f=1;
    int r=1;
    int k=1;
    q[r]=src;
    while(f<=r){
        int u=q[f];
        f=f+1;
        for(int v=1;v<=n;v++){
            if(a[u][v]==1&&s[v]==0){
                s[v]=1;
                r=r+1;
                q[r]=v;
                t[k][1]=u;
                t[k][2]=v;
                k=k+1;
            }
        }
    }

}
void main(){
    int n,a[20][20],src,s[20],t[20][20],q[20];
    printf("Enter the  number of nodes\n");
    scanf("%d",&n);
    printf("Enter the adjacenecy matrix\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        scanf("%d",&a[i][j]);
        }
    }
    printf("Enter th source\n");
    scanf("%d",&src);
    for(int i=1;i<=n;i++){
        s[i]=0;
    }
    bfs(n,a,src,t,s,q);
    int flag =0;
    for(int i=1;i<=n;i++){
        if(s[i]==0){
            printf("%d is not reachable\n",i);
            flag=1;
        }else{
            printf("%d is reachable\n",i);
        }
    }
    if(flag==0){
        printf("Spanning tree is:\n");
        for(int i=1;i<=n-1;i++){
            printf("%d-%d",t[i][1],t[i][2]);
        }
    }else{
        printf("Spaning tree doesn't Exist");
    }
}