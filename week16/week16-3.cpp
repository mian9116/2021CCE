#include <stdio.h>

char line[300];

int main()
{
    printf("�зӵۥ�: -256 0.0000 1010101010101010\n");

    int n;
    float f;
    scanf("%d%f%s",&n,&f,line);

    ///�`�NŪ�J�r�����ݭn&

    printf("�ڭ�Ū��F���: %d\n",n);
    printf("�ڭ�Ū��F���: %d\n",f);
    printf("�ܪ��ܪ����r��: %s\n",line);
}
