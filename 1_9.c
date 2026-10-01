//読み込んだ整数の値を表示して確認

#include <stdio.h>

int main(void)
{
    int no;//格納する変数の箱をつくる

    printf("整数を入力してください：");
    scanf("%d", &no);//キーボードから10進数を読み込んでその値をnoに格納する

    printf("あなたは%dと入力しましたね。\n", no);

    return(0);
}