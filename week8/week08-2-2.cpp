#include <stdio.h>

int main()

{
    for(int n=2;n<=100;n++)
    {
        int a=0;

        for(int i=2;i<n;i++)
        {
        if(n%i==0) a=1;
        }
        if(a==0) printf("%d ",n);
    }
}
