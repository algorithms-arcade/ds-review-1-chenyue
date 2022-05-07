function printN(n){
    
    if (n >= 1)  {console.log(`${n}: `, n)} else { return -1 }
    
    printN(n-1);
    
}

const sol = printN(10000);