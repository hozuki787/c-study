#include <stdio.h>

int main(void)
{
    int n1, n2, n3;
    int wa;

    puts("２つの整数を入力してください。");
    printf("整数１：");  scanf("%d", &n1);
    printf("整数２：");  scanf("%d", &n2);
    printf("整数３：");  scanf("%d", &n3);

    wa = n1 + n2 + n3;

    printf("それらの積は%dです。\n", wa);

    return (0);
}