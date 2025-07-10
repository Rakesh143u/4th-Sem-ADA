# include <stdio.h> 
#include<stdlib.h>
#include<string.h>
int partition(char a[],int low,int high){
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

 void quicksort(char a[],int low,int high){
    int k;
    if(low<high){
        k=partition(a,low,high);
        quicksort(a,low,k-1);
        quicksort(a,k+1,high);


    }
 }
 void main(){
    int n;
    char s[1000];
   printf("Enter a word\n");
   scanf("%s",s);
   n=strlen(s);
    quicksort(s,0,n-1);
    printf("sorted word is %s",s);
    
    
}
 
