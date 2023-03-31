//样例输入
//1000
//样例输出
//6 its factors are 1 2 3
//28 its factors are 1 2 4 7 14
//496 its factors are 1 2 4 8 16 31 62 124 248
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N, arr[1001],tem=0;
    scanf("%d", &N);
    for (int i = 1; i < N; i++)//遍历1-1000
    {
        for (int a = 1, b = 0; a < i; a++)//遍历1-256 因子
        {
            while (i % a == 0)
            {
                tem += a;
                arr[b] = a;
                b++;
            }
            if (tem == i)
            {
                printf("%d its factors are", i);
                for (i = 0; i <= b; i++)
                    printf("%d ", arr[i]);
            }



        }
    }
}
