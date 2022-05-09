function MaxSubseqSum4 ( A, N) {
    let ThisSum, MaxSum;
    let i;
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


let  arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 100, 12];
       
let n = 12;
    
console.log(MaxSubseqSum4(arr, n));
    
