
function Max3 (A, B, C) {
    return A>B ? A>C? A:C: B>C? B : C;
}

function DivideAndConquer ( arr,  left,  right){
    let MaxLeftSum, MaxRightSum;
    let MaxLeftBorderSum, MaxRightBorderSum;

    let LeftBorderSum, RightBorderSum;
    let center, i;

    if(left == right) {
        if(arr[left] > 0) return arr[left];
        else return 0;
    }

    center = Math.floor((left+right)/2);
    MaxLeftSum = DivideAndConquer(arr, left, center);
    MaxRightSum = DivideAndConquer(arr, center+1, right);

    MaxLeftBorderSum = 0; LeftBorderSum = 0;
    for (i = center; i>=left; i--){
        LeftBorderSum += arr[i];
        if(LeftBorderSum > MaxLeftBorderSum)
            MaxLeftBorderSum = LeftBorderSum;
    }

    MaxRightBorderSum = 0; RightBorderSum = 0;
    for (i = center+1; i<= right; i++){
        RightBorderSum += arr[i];
        if(RightBorderSum > MaxRightBorderSum)
            MaxRightBorderSum = RightBorderSum;
    }

    let max3 = Max3(MaxLeftSum, MaxRightSum, MaxLeftBorderSum+MaxRightBorderSum);
    return max3;
}

function MaxSubseqSum3( arr,  N){
    return DivideAndConquer(arr, 0, N-1);
}


let  arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 100, 12];
       
let n = 12;
    
console.log(MaxSubseqSum3(arr, n));
    

