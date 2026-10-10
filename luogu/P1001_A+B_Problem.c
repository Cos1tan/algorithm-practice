/*
 * 洛谷 P1001 A+B Problem
 * https://www.luogu.com.cn/problem/P1001
 *
 * 2026-10-10
 *
 * |a|, |b| <= 10^9，a + b 最大可达 2*10^9，
 * 超过 int（约 2.147*10^9）的安全范围，所以用 long long。
 */
#include <stdio.h>

int main(void) {
    long long a, b;
    if (scanf("%lld %lld", &a, &b) != 2) {
        return 1;
    }
    printf("%lld\n", a + b);
    return 0;
}
