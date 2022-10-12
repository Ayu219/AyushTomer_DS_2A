#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n,p,q,i,j,k,sum=0;
    int first[10][10],second[10][10],multiply[10][10];
    printf("Enter Number of Rows And Columns:\n");
    scanf("%d %d",&m,&n);
    printf("Enter Elements Of First Matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&first[i][j]);}}
    printf("Enter Number Of Rows And Columns:\n");
    scanf("%d %d",&p,&q);
    if(n!=p){
        printf("Not Possible\n");
    }
    else{
        printf("Enter Elements Of Second Matrix:\n");
        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                scanf("%d",&second[i][j]);}}
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                for(k=0;k<p;k++){
                    sum=sum+first[i][k]*second[k][j];}
                multiply[i][j]=sum;
                sum=0;}}
        printf("Product:\n");
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                printf("%d ",multiply[i][j]);}
                printf("\n");}}
                system("pause");
    
return 0;
}