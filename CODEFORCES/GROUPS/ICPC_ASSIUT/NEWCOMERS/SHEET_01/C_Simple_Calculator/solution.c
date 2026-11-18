#include <stdio.h>

int main() {
    long long x;
    long long y;

    scanf("%lld %lld", &x, &y);

    long long sum = x + y;
    long long m = x * y;
    long long n = x - y;

    printf("%lld + %lld = %lld\n", x, y, sum);
    printf("%lld * %lld = %lld\n", x, y, m);
    printf("%lld - %lld = %lld", x, y, n);

    return 0;
}
