#include<stdio.h>
int search(int a[],int key,int n){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==key) return mid+1;
        if(a[mid]<key){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
}
void main(){
    int a[50],n,key,pos;
    printf("size\n");
    scanf("%d",&n);
    printf("Enter elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter key to be found\n");
    scanf("%d",&key);
    pos=search(a,key,n);
    printf("The element is found at %d",pos);
    
    
}