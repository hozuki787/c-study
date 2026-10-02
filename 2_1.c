//読み込んだ二つの整数値の和差積商剰余を表示

#include <stdio.h>

int main(void)
{
    int vx, vy;

    puts("2つの整数を入力してください");
    printf("整数vx：");   scanf("%d", &vx);
    printf("整数vy：");   scanf("%d", &vy);

    printf("vx + vy = %d\n", vx + vy);
    printf("vx - vy = %d\n", vx - vy);
    printf("vx * vy = %d\n", vx * vy);
    printf("vx / vy = %d\n", vx / vy);
    printf("vx %% vy = %d\n", vx % vy); 
    //printfは書式設定を行う関数で、書式文字列内の文字%には書式を指定する変換指定を導く任務があるため、
    //本当に%と表示したいときは%%と記述する

    return 0;
}