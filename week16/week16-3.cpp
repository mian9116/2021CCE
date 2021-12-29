#include <stdio.h>

char line[300];

int main()
{
    printf("請照著打: -256 0.0000 1010101010101010\n");

    int n;
    float f;
    scanf("%d%f%s",&n,&f,line);

    ///注意讀入字母不需要&

    printf("我們讀到了整數: %d\n",n);
    printf("我們讀到了整數: %d\n",f);
    printf("很長很長的字串: %s\n",line);
}
