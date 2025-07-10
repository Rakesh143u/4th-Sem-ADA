#include<stdio.h>
void minmax(int a[],int low,int high,int *fmax,int *fmin){
    int lmin,lmax,rmin,rmax;
    if(low==high){
        *fmax=a[low];
        *fmin=a[high];
    }else if(low+1==high){
        if(a[low]>a[high]){
            *fmax=a[low];
            *fmin=a[high];
        }else{
            *fmax=a[high];
            *fmin=a[low];
        }
    }else{
        int mid=(low+high)/2;
        minmax(a,low,mid,&lmax,&lmin);
        minmax(a,mid+1,high,&rmax,&rmin);
        if(lmax>rmax){
            *fmax=lmax;
        }else{
            *fmax=rmax;
        }
        if(lmin>rmin){
            *fmin=rmin;
        }else{
            *fmin=lmin;
        }
            
    }
    
}
int main(){
    int a[100],i,n,fmax,fmin;
    printf("enter the sze\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    minmax(a,0,n-1,&fmax,&fmin);
    printf("The max element is %d and min element is %d",fmax,fmin);
    return 0;
}