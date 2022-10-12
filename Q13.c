#include <stdio.h>
int main()
{
    int i, n, a[10], ele, m;
    void *h,*ad;
    printf("Enter number of elements,less than 10:\n");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    h= &a[0];
    printf("Enter the element of which you wan't the address:\n");
    scanf("%d", &ele);
    for (i = 0; i < n; i++)
    {
        if (a[i] == ele)
        {
            m = i;
            break;
        }
    }
    ad=h+sizeof(int)*(m);
    printf("Calculated Address:%p,Actual Physical Address:%p",ad,&a[m]);
}