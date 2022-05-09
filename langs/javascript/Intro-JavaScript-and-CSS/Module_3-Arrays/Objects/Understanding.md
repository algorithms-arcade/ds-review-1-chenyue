---
layout: home
title: Arrays - Check For Understanding 
#permalink: index.html # in case of we remove the index.md file, this doc will be the index page
---

<div class="row">
<div class="columnStmt" markdown="1">

[Home - Intro to JS](../README.md) 

[Previous](./Project.md)  | [Home - Intro to JS](../README.md) 

### Question 1

####  How would we add (2,3,4,5) to the end of this array?

```
let array = ['a', 'b', 'c', 'd', 'e'];
```

-  A)  `array.push(2,3,4,5);`  
-  B)  `array.unshift(2,3,4,5);` 
-  C)  `array.shift(2,3,4,5);` 
-  D)  `array.pull(2,3,4,5);`     

#### Answer:   (A) 

- Hints: (A)  `push` adds items to the end of the array. View a quick reference on push [here](https://www.w3schools.com/jsref/jsref_push.asp).

### Question 2

####  How would we access the letter "a" in the above array?
```
let array = ['a', 'b', 'c', 'd', 'e'];
```

- A)    `array[1]` 
- B)    `array[0]`
- C)    `array.a`
- D)    `array.start` 

#### Answer:   (B) 

- Hints: (B)  The first item in an array is at the 0th index. We can access items in arrays by calling the array name, and the number of the index we want in `[]`.

### Question 3

####  How would we access the letter "b" in the above array?

```
let letters = [['a', 'b',] ['c', 'd', 'e']];
```

- A)    `array[0][1]` 
- B)    `array[0][2]` 
- C)    `array[1][2]`
- D)    `array[1][1]` 

#### Answer:   (A) 

- Hints: (A)  The array `[0,1]` is the first item in the array named `letters`. First we access that with `[0]`, then we can access the second item in the array with `[1]`.

### Question 4

####  How would we find how many items are in the above array?

```
let array = ['a', 'b', 'c', 'd', 'e'];
```

- A) `array.index`
- B) `array.number`
- C) `array.length`
- D) `array.count`


#### Answer:   (C) 

- Hints: (C)  `array.length` returns the number of items in an array. You can read more about it [here](https://www.w3schools.com/jsref/jsref_length_array.asp).

### Question 5

####  How would we write a FOR loop to console.log all of the numbers in the above array?

```
let sequence = [1, 1, 2, 3, 5, 8, 13];
```

- A)   
    ```
    for (let i = 0; i < sequence.length; i++) {
    console.log(sequence[i]);
    }
    ```
- B)   
    ```
    for (let i = 0; i > sequence.length; i++) {
    console.log(sequence[i]);
    }
    ```
- C) 
    ```
    for (let i = 0, i < sequence.length, i++) {
    console.log(sequence[i]);
    }
    ```
- D)   
    ```
    for (let i = 0; i > 6; i++) {
    console.log(sequence[i]);
    }
    ```

#### Answer:   (A) 

- Hints: (A)  




</div>
</div>
