#include <stdio.h>

int a[10]={1,5,8,7,2,3,6,4,9,0};
int main()

{
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");

    for(int i=0;i<10-1;i++)
    {
        if(a[i]>a[i+1])
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }

    }

    for(int i=0;i<10;i++) printf("%d ",a[i]);
}
