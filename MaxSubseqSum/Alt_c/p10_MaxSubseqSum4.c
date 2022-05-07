#include <stdio.h>

int MaxSubseqSum4 (int A[],int N) {
    int ThisSum, MaxSum;
    int i;
    ThisSum = MaxSum = 0;
    for(i = 0; i < N; i++) {
        ThisSum += A[i];
        if ( ThisSum > MaxSum)
            MaxSum = ThisSum;
        else if (ThisSum < 0)
            ThisSum = 0;
    }
    return MaxSum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 100, 12};
    
    printf("%d\n", arr[10]);
    int n = 12;
    printf("%d", MaxSubseqSum4(arr, n));
    return 0;
}
