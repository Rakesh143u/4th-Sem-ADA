#include<stdio.h>
#include<stdlib.h>
 int unique(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                return 0;
            }
        }
    }
    return 1;
 }
 int main(){
    int n,i,res,a[60];
    printf("enter the number of elemnets\n");
    scanf("%d",&n);
    printf("enter the elemets\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    res=unique(a,n);
    if(res==1){
        printf("all elements are unique\n");

    }else{
        printf("duplicates present\n");
    }
    return 0;
 }