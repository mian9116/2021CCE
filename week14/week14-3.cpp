#include <stdio.h>

int a[3]={1,2,3};
int b[3]={4,5,6};
int c[3]={7,8,9};

int main()
{
    for(int i=0;i<3;i++)
    {
        c[i]=a[i]*b[i];
    }

    int ans=0;
    for(int i=0;i<3;i++) ans+=c[i];

    printf("ans:%d\n",ans);
}
