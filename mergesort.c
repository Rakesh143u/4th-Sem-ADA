#include<stdio.h>
#include<stdlib.h>
void simplemerge(int a[],int low,int mid,int high){
    int i,j,k,temp[1000];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid&&j<=high){
        if(a[i]<a[j]){
            temp[k]=a[i];
            i=i+1;
            k=k+1;
        }else{
            temp[k]=a[j];
            j=j+1;
            k=k+1;
        }
    }
    while(i<=mid){
        temp[k]=a[i];
        i=i+1;
        k=k+1;
    }
    while(j<=high){
        temp[k]=a[j];
        j=j+1;
        k=k+1;
    }
    for(i=low;i<=high;i++){
        a[i]=temp[i];
    }
}
void mergesort(int a[],int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        simplemerge(a,low,mid,high);


    }
}
void main(){
    int i,n,a[1000];
    printf("enter number of elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        a[i]=rand()%1000;
    }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    mergesort(a,0,n-1);
    printf("the sorted array is\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

}