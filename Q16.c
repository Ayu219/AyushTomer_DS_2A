#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,n,m,sum=0;
    int a[10][10],b[10][10],c[10][10];
    printf("Enter Row of A:\n");
    scanf("%d",&n);
    printf("Enter Column of A:\n");
    scanf("%d",&m);
    printf("Enter Elements of A:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);}}
    printf("Enter Elements of B:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&b[i][j]); }}
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            c[i][j]=a[i][j]+b[i][j];}}
    printf("Elements Of C:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",c[i][j]);}
        printf("\n");}
    system("pause");
return 0;
}