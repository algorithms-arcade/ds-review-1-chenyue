
const sol = clock_tck()

function clock_tck() {
  let start, end, duration;
  let a = [];
  const MAXN = 10;
  const MAXK = 1e7;
  
  for(let i = 0; i < MAXN; i++) a[i] = i;

  start = new Date().getTime();  
  for(i=0; i<MAXK; i++)
    f1(MAXN-1, a, 1.1);
  end = new Date().getTime();  
  duration = (end - start)
  console.log('ticks1: ', (end - start));
  console.log('duration1: ', duration);
  
  start = new Date().getTime(); 
  for(i=0; i<MAXK; i++) 
    f2(MAXN-1, a, 1.1);
  end = new Date().getTime();  
  duration = (end - start)
  console.log('ticks2: ', (end - start));
  console.log('duration2: ', duration);

}

function f1(n, arr, x){
  
  let value = arr[0];
  for(let i = 1; i <= n; i++)
    value += arr[i]*Math.pow(x, i);
  return value
  
}

function f2(n, arr, x){
  
  let value = arr[0];
  for(let i = n; i > 0; i--)
    value = arr[i-1] + x*value;
  return value;
  
}



