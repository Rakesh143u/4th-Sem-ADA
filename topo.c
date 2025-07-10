#include<stdio.h>
#define stacksize 20
void cal_indigree(int n,int a[20][20],int indegree[100]){
    for(int j=1;j<=n;j++){
        int sum=0;
        for(int i=1;i<=n;i++){
            sum+=a[i][j];
        }
        indegree[j]=sum;
    }
}
void topologicalsort(int n,int a[20][20],int s[100]){
    int indegree[100];
    int t[100];
    cal_indigree(n,a,indegree);
    int top=-1;
    int k=1;
    for(int i=1;i<=n;i++){
        if(indegree[i]==0){
            top=top+1;
            s[top]=i;

        }
    }
    while(top!=-1){
            int u=s[top];
            top=top-1;
            t[k]=u;
            k=k+1;
            for(int v=1;v<=n;v++){
                if(a[u][v]==1){
                    indegree[v]-=1;
                    if(indegree[v]==0){
                        top=top+1;
                        s[top]=v;
                    }
                }
            }



    }
    printf("The topological sequence is :\n");
    for(int i=1;i<=n;i++){
        printf("%d",t[i]);
    }
}
void main(){
    int n,s[100],a[20][20];
    printf("Enter the number of vertices\n");
    scanf("%d",&n);
    printf("Enter the adjacnecy matrix\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){

        
    scanf("%d",&a[i][j]);
    }
    }
    topologicalsort(n,a,s);


}