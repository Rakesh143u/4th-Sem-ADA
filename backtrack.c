#include<stdio.h>
int flag=0;
void subset(int n,int a[],int d){
    int i,k,sum,x[100];
    for(i=1;i<=n;i++){
        x[i]=0;
    }
    sum=0;
    k=1;
    x[k]=1;
    while(1){
        if(k<=n){
            if(sum+a[k]==d){
                for(i=1;i<=n;i++){
                    if(x[i]==1){
                        printf("%d\t",a[i]);
                    }
                }
                printf("\n");
                flag=1;
                x[k]=0;
                k=k+1;
                x[k]=1;
            }else if(sum+a[k]<d){
                sum=sum+a[k];
                k=k+1;
                x[k]=1;
            }else{
                x[k]=0;
                k=k+1;
                x[k]=1;
            }
        }else{
            k=k-1;
            while(k!=0&&x[k]==0){
                k=k-1;
            }
            if(k==0) return ;
            x[k]=0;
            sum=sum-a[k];
            k=k+1;
            x[k]=1;
        }

    }
}
void main (){
    int n,a[50],d,i;
printf("enter the value of n\n");
scanf("%d",&n);
printf("enter the %d elements into array\n",n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);

}
printf("enter the value of d\n");
scanf("%d",&d);
subset(n,a,d);
if(flag==0){
    printf("\nNo solution exists");
}

}




