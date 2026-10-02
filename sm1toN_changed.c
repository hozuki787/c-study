#include <stdio.h>
int main()
{
    int N;
    printf("整数を入力してください。");
    scanf("%d", &N);
    long x = 0;
    for (int n = 1; n <= N; n++) x += n;
    printf("The sum of numbers from 1 to %d is %ld (C)\n", N, x);

    return 0;
}
