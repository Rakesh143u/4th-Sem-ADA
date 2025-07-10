#include<stdio.h>
#include<stdlib.h>
void bubble(int a[],int n){
    int i,j,temp;
    for(j=1;j<n;j++){
        for(i=0;i<n-j;i++){
            if(a[i]>a[i+1]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    }
}
void main(){
    int a[1000],n;
    printf("Enter the number of arrays\n");
    scanf("%d",&n);
    printf("The random array is\n");
    for(int i=0;i<n;i++){
        a[i]=rand()%1000;

    }
    
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    bubble(a,n);
    printf("the sorted array is\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

}
