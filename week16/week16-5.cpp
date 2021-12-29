#include <stdio.h>

char line[300]="101010010101010101010110100010001010100";

int main()
{
    int ans=0;

    int i=0;
    for(int i=0;line[i]!='\0';i++)
    {
        if(line[i]=='1') ans++;
    }
    printf("¦³%d­Ó1\n",ans);
}
