#include <stdio.h>

int a[10]={1,5,8,7,2,3,6,4,9,0};
int main()

{
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");

    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
}
