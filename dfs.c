#include<stdio.h>

void dfs(int n,int a[20][20],int src,int t[20][20],int s[20]){
    static int k=1;
    s[src]=1;
    for(int v=1;v<=n;v++){
        if(a[src][v]==1&& s[v]==0){
            t[k][1]=src;
            t[k][2]=v;
            k=k+1;
            dfs(n,a,v,t,s);
        }
    }

}
void main(){
    int n,a[20][20],src,s[20],t[20][20];
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
    dfs(n,a,src,t,s);
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
        printf("DFS traversal  is:\n");
        for(int i=1;i<=n-1;i++){
            printf("%d-%d\n",t[i][1],t[i][2]);
        }
    }else{
        printf("Some nodes are not visited");
    }
}