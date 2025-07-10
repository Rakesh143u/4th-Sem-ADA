#include<stdio.h>
#include<stdlib.h>
int max(int a[50],int n){
    int i;
    int maxi=a[0];
    for(i=0;i<n;i++){
        
        if(a[i]>maxi){
            maxi=a[i];
        }
    } 
    return maxi;
}
int main(){
    int n,i,a[50],maxi;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    maxi=max(a,n);
    printf("the largest element is %d",maxi);
    return 0;
}