#include <stdio.h>
int main()

{
	int n;
	scanf("%d",&n);

	int now=1,sum=0;
	for(int i=1;i<=n;i++)
	{
	now*=i;
	sum+=now;
	}

	printf("%d",sum);
}
