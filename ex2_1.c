//前者の値が校舎の何％であるかを表示するプログラム

#include <stdio.h>

int main(void)
{
    int n1, n2;

    puts("２つの整数を入力してください");
    printf("整数A：\n"); scanf("%d", &n1);
    printf("整数B：\n"); scanf("%d", &n2);

    int percent;
    percent = n1 * 100 / n2;

    printf("Aの値はBの%d%%です。\n", percent);

    return 0;
}