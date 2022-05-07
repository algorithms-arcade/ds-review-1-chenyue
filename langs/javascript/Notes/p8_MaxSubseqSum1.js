
function MaxSubseqSum1 (A,  N){
    let ThisSum, MaxSum = 0;
    let i, j, k;
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

    let  arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 100, 12];
       
    let n = 12;
    console.log(MaxSubseqSum1(arr, n));
    

