# include <stdio.h> 
#include<stdlib.h>
int partition(int a[],int low,int high){
    int i,j,key,temp;
    key=a[low];
    i=low+1;
    j=high;
    while(1){
        while(i<=high&&a[i]<=key){
            i=i+1;
        }
        while(a[j]>key){
            j=j-1;
        }
        if(i<j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }else{
            temp=a[low];
            a[low]=a[j];
            a[j]=temp;
            return j;
        }
    }

}

 void quicksort(int a[],int low,int high){
    int k;
    if(low<high){
        k=partition(a,low,high);
        quicksort(a,low,k-1);
        quicksort(a,k+1,high);


    }
 }
 void main(){
    int n,a[1000];
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the elements of array\n");
    for(int i=0;i<n;i++){
        a[i]=rand()%1000;
    }
    quicksort(a,0,n-1);
    printf("The sorted array is :\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    
    
}
 
