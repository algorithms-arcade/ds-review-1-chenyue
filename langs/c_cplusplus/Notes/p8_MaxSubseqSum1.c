#include <stdio.h>

int MaxSubseqSum1 (int A[],int N){
    int ThisSum, MaxSum = 0;
    int i, j, k;
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            ThisSum = 0;
            for(k = i; k <= j; k++) 
                ThisSum +=A[k];
            if( ThisSum > MaxSum)
                MaxSum = ThisSum;
        }
    }   
    return MaxSum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 100, 12};
    
    printf("%d\n", arr[10]);
    int n = 12;
    printf("%d", MaxSubseqSum1(arr, n));
    return 0;
}
