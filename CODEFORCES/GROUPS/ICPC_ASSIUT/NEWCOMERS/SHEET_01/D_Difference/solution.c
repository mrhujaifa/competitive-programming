
#include <stdio.h>

int main(void) {
    long long a, b, c, d;

    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    long long x = a * b;
    long long y = c * d;

    long long result = x - y;

    printf("Difference = %lld\n", result);

    return 0;
}
