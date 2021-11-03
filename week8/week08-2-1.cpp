#include <stdio.h>
int main()

{
    int n,a;
    scanf("%d",&n);

    for(int i=2;i<n;i++)
    {
    if(n%i==0) a=1;
    }

    if(a==0) printf("%d是質數",n);
    else printf("%d不是質數",n);
}
