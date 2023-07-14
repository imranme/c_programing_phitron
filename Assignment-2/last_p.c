#include <stdio.h>

int main() {
    int N, A[100], X, V;
    scanf("%d", &N);
    for(int i=0; i<N; i++) {
        scanf("%d", &A[i]);
    }

    scanf("%d %d", &X, &V);
    A[X] = V;

    for(int i=0, j=N-1; i<j; i++, j--) {
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }

    for(int i=0; i<N; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}

