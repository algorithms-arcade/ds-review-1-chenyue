---
layout: home
title: Advanced Array - Check For Understanding 
#permalink: index.html # in case of we remove the index.md file, this doc will be the index page
---

<div class="row">
<div class="columnStmt" markdown="1">

[Home - JavaScript Fundamentals](../README.md)

[Previous](./Project.md)  | [Home - JavaScript Fundamentals](../README.md)

### Question 1

####  When should you use a for loop instead of .forEach() ?

-  A)   when working with large datasets
-  B)   never use for loops  
-  C)   whenever working with arrays and objects 
-  D)   always use for loops     

#### Answer:   (A) 

- Hints: (D)  .forEach may not be the best when trying to get thru only a part of a dataset.
- Hints: (A)  

### Question 2

####  What would be the output of the following code?

```
var arr = [1, 2, 3, 4];
var newarr = [];
arr.forEach(function(item) {
 newarr.push(item + 5);
})

console.log(newarr);
```

- A)    [6,7,8,9]  
- B)    15 
- C)    [1,2,3,4,5] 
- D)    30 

#### Answer:   (A) 

### Question 3

####  Consider the array below. Which method would you want to use to return an array that just has Brit and Brian's objects?

```
const data = [
        {name:  "Nicole", lovesJavaScript: false}, 
        {name:  "Brian", lovesJavaScript: true}, 
        {name:  "Andrew", lovesJavaScript:false}, 
        {name:  "Brit", lovesJavaScript: true}
    ]
```

- A)    `.reduce` 
- B)    `for each` 
- C)    `.map`
- D)    `.filter` 

#### Answer:   (D) 

### Question 4

####  What would the value of newnum be after running this script?

```
js const numbers = [5, 10, 15]; 
const newnum = numbers.reduce((total,currentValue) => { 
    return total + currentValue; 
    }, 0);
```

- A) [5,10,15]
- B) 30
- C) [5, 15, 30]    
- D) 15 

#### Answer:   (B) 

### Question 5

####  Where is the callback in this function?

```
function sayHi(name) {
   return `Hi, ${name}
}

function sayHelloName(callback, name) {
 return callback(name);
 };

sayHelloName(sayHi, Buzz) // returns "Hi, Buzz!"
```

- A) name 
- B) callback 
- C) sayHi     
- D) sayHelloName 

#### Answer:   (C) 

- Hints: (B)  callback is the parameter for the callback function being passed into the higher order function.
- Hints: (C)  



</div>
</div>
