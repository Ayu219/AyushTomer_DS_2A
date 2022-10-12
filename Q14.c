#include <stdio.h>
void main()
{
    int a[10][10], i, j, m, n, c = 0, ele;
    void *b, *ad;
    printf("Enter order of matrix:\n");
    scanf("%d%d", &m, &n);
    printf("Enter array elements:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    b = &a[0][0];
    printf("Enter the element of which you want the address:\n");
    scanf("%d", &ele);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            if(a[i][j]==ele)
            break;
    }
    ad=b+sizeof(int)*(i-0)*((m-0+1)+(j-0));
    printf("Calculated Address:%p,Actual Physical Address:%p",ad,&a[i][j]);
}