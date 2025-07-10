#include<stdio.h>
#include<conio.h>
#include<math.h>

int *prime(int n ,int a[])
{
    int p,j;
    int l[1000];
    
    for(p=2;p<n;p++){
    a[p]=p;
    }
    for(p=2;p<sqrt(n);p++)
    {
        if(a[p]!=0){
            j=p*p;
            while(j<=n){
                a[j]=0;
                j=j+p;
            }
        }
    }
    int i=0;
    for(p=2;p<n;p++){
        if(a[p]!=0){
            l[i]=a[p];
            i=i+1;
        }
    }
    return l;

}

void main(){
    int n,a[10000],p;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(p=0;p<n;p++){
        scanf("%d",&a[p]);

    }
    int* res=prime(n,a);
    printf("the prime numbers are \n");
    for(p=0;p<n;p++){
        printf("%d",res[p]);
    }
    getch();

}