
#include <stdio.h>
#include <math.h>

int main() {

    long long A, B;
    scanf("%lld %lld", &A, &B);

    double result = (double)A / B;

    long long floor_value = floor(result);
    long long ceil_value = ceil(result);
    long long rounded_value = round(result);

    printf("floor %lld / %lld = %lld\n", A, B, floor_value);
    printf("ceil %lld / %lld = %lld\n", A, B, ceil_value);
    printf("round %lld / %lld = %lld\n", A, B, rounded_value);

    return 0;
}
