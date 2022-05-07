
function MaxSubseqSum2 (A,  N){
    let ThisSum, MaxSum = 0;
    let i, j, k;
    for(i = 0; i < N; i++) {
        ThisSum = 0;
        for(j = 0; j < N; j++) {
            ThisSum += A[j];
            if ( ThisSum > MaxSum)    
                MaxSum = ThisSum;
        }
    }   
    return MaxSum;
}

    let  arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 100, 12];
       
    let n = 12;
    console.log(MaxSubseqSum2(arr, n));
    

