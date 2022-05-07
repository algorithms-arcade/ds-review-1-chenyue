#include <stdio.h>

void PrintN (int N){
    for (int i = 0; i <= N; i++){
        printf("%d\n", N);    
    }
    
}

int main() {
    int n = 10000;
    PrintN(n);
    return 0;
}
