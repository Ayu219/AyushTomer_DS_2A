#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,n;
    int *a;
    int *b;
    printf("Enter Number Of Elements:\n");
    scanf("%d",&n);
    a=(int *)calloc(n,sizeof(n));
    b=(int *)calloc(n,sizeof(n));
    printf("Enter Elements Of array:\n");
    for(i=0;i<n;i++){
            scanf("%d",a+i);
      }
    for(i=0,j=n-1;i<n;i++,j--){
        *(b+i)=*(a+j);
    }
    printf("Array After Reversal:\n");
    for(i=0;i<n;i++){
            printf("%d\n",*(b+i));
      }
    
      

    
    
return 0;
}