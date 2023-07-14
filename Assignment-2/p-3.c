#include <stdio.h>

int main() {
    int n, v, sum_even = 0, sum_odd = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v);
        if (v % 2 == 0) {
            sum_even += v;
        } else {
            sum_odd += v;
        }
    }
    printf("%d %d\n", sum_even, sum_odd);
    return 0;
}
