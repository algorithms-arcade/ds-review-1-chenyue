#include <stdio.h>

void PrintN (int N) {
    if (N) {
        printf("%d\n", N);
        PrintN(N-1);        
    }
    return;
}

int main() {
    int n = 100000;
    PrintN(n);
    return 0;
}
