#include <stdio.h>
int main()

{
    int n,a;
    scanf("%d",&n);

    for(int i=2;i<n;i++)
    {
    if(n%i==0) a=1;
    }

    if(a==0) printf("%d�O���",n);
    else printf("%d���O���",n);
}
