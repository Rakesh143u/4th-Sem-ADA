#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int solutioncount=0;
int place(int x[],int k){
  for(int i=1;i<=k-1;i++){
    if(x[i]==x[k]||abs(x[i]-x[k])==abs(i-k)){
      return 0;
    }
  }
  return 1;
}
void nqueens(int x[],int n){
  int k;
  k=1;
  x[k]=0;
  while(k!=0){
    x[k]=x[k]+1;
    while(x[k]<=n&&!place(x,k)){
      x[k]=x[k]+1;

    }
    if(x[k]<=n){
      if(k==n){
        printf("%d solution is [",++solutioncount);
        for(int i=1;i<=n;i++){
          printf("%d",x[i]);
        }
        printf("]\n");
      }
        k=k+1;
        x[k]=0;
      
    }else{
      k=k-1;
    }


    }
  }
      
void main(){
  int x[10000],n;
  printf("Enter the number of queens\n");
  scanf("%d",&n);
  nqueens(x,n);
  
}
 
