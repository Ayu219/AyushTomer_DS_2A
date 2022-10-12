#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,m,j;
    int a[10][10];
    printf("Row:");
    scanf("%d",&m);
    printf("Column:");
    scanf("%d",&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);}}
        printf("Elements After Transpose:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        printf("%d ",a[j][i]);}
        printf("\n");}    


return 0;
}