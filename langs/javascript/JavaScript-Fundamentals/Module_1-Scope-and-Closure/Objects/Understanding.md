---
layout: home
title: Scope and Closure - Check For Understanding 
#permalink: index.html # in case of we remove the index.md file, this doc will be the index page
---

<div class="row">
<div class="columnStmt" markdown="1">

[Home - JavaScript Fundamentals](../README.md)

[Previous](./Project.md)  | [Home - JavaScript Fundamentals](../README.md)

### Question 1

####  What is the output of console.log(names)?

```
function sayHi(){
 let names = ["Kali", "Inderpal", "Nicole", "Megan"];
 for(x in names){
 console.log(`Hi my name is ${names[x]}`)
 };

console.log(names);
sayHi();
```

-  A)   ["Kali", "Inderpal", "Nicole", "Megan"] 
-  B)   error: names is not declared 
-  C)   error: names is not defined 
-  D)   
    ``` 
        "Hi my name is Kali"
        "Hi my name is Inderpal"
        "Hi my name is Nicole"
        "Hi my name is Megan"
    ```

#### Answer:   (C) 

- Hints: (A)  The names array will not print since the console.log statement is a global statement and the names array is function scoped.
- Hints: (C)  Scope is important to look for here. Because names was created in the sayHi function, it is function scoped and cannot be accessed outside of the function.

### Question 2

####  Consider the code below. Where can "fruits" be accessed?
```
function eatFruit(array){
 let fruits = ["apple", "orange", "bananna"];
 for (x in array){
 console.log(`Yum! ${array[x]}!`)
 };
};
```

- A)    inside of the for loop only  
- B)    everywhere 
- C)    anywhere within the eatFruit function 
- D)    outside of the function only 

#### Answer:   (C) 

- Hints: (A)  Though block scope does exist, fruits was not created within the for loop so it is not constrained to the for loop.
- Hints: (C)  anywhere within the eatFruit function.

### Question 3

####  What would the output of the following code be?

```
printTest();

function printTest(){
  console.log('this printed!');
}
```

- A)    console.log('this printed!'); 
- B)    ReferenceError 
- C)    null
- D)    'this printed!' 

#### Answer:   (D) 

- Hints: (D)  Because of hoisting in JavaScript, functions can be invoked before they are declared and defined.

### Question 4

####  What defines the closure in the code below?

```
function game(sport){
  let score = 0;
  return function win(){
    score++;
    return `Your ${sport} game score is ${score}`
  }
}
```

- A) function scope is created and followed
- B) return `Your ${sport} game score is ${score}` attempts to change the score variable.
- C) nonsensical variable names are used    
- D) return function win()


#### Answer:   (D) 

- Hints: (D)  The win function is a nested function that reaches outside of its scope to access score and sport.



</div>
</div>
