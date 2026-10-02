//整数と浮動小数点数

#include <stdio.h>

int main(void)
{
    int     nx;
    double  dx;

    nx = 9.99;
    dx = 9.99;

    printf("int 型の変数nxの値：%d\n", nx);         //9
    printf("            nx / 2：%d\n", nx / 2);     //9 / 2

    printf("double型変数dxの値：%f\n", dx);         //9.99
    printf("            dx/2.0：%f\n", dx / 2.0);   //9.99 / 2.0
//変数指定"%f"のfは浮動小数点floating-pointの頭文字である。小数点以下の部分は6桁も表示される
    return 0;    
}