//読み込んだ整数値に10を減じた値を表示する

#include <stdio.h>

int main(void)
{
    int no;

    printf("整数を入力してください");
    scanf("%d", &no);

    printf("その数に10を減じると%dです。\n", 10 - no);

    return (0);
}