#include<stdio.h>
#include<stdlib.h>
 void slect(int a[],int n){
    int i,j,temp,min,pos;
    for(j=0;j<=n-2;j++){
        min=a[j];
        pos=j;
        for(int i=j+1;i<n;i++){
            if(a[i]<min){
                min=a[i];
                pos=i;
            }
        }



    
    temp=a[j];
    a[j]=a[pos];
    a[pos]=temp;
    }

 }
 void main(){
    int a[1000],n;
    printf("enter number\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        a[i]=rand()%1000;

    }
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("The soted array\n");
    
    slect(a,n);
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
 }