#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,a,r,c;
    int arr[10][10];
    int app[10][10];
    printf("Enter Number Of Rows");
    scanf("%d",&r);
    printf("Enter Number Of Columns");
    scanf("%d",&c);
    printf("Enter Elements Of Array");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        scanf("%d",&arr[i][j]);}}
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            app[j][i]=arr[i][j];}}
    printf("Transpose Of Array:\n");        
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d ",app[i][j]);}
        printf("\n");}  
    system("pause");     
return 0;
}