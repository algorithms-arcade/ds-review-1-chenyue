---
layout: home
title: Prototypes and Inheritance - Check For Understanding 
#permalink: index.html # in case of we remove the index.md file, this doc will be the index page
---

<div class="row">
<div class="columnStmt" markdown="1">

[Home - JavaScript Fundamentals](../README.md)

[Previous](./Project.md)  | [Home - JavaScript Fundamentals](../README.md)

### Question 1

####  when should we use window binding?

-  A)   Never 
-  B)   Working inside objects 
-  C)   With constructor functions  
-  D)   When declaring new functions    

#### Answer:   (A) 

- Hints: (B)  Window is not a great practice as it reflects the global scope in the browser.
- Hints: (A)  

### Question 2

####  What does `this` refer to in implicit binding?

- A)    instance created and returned by a constructor function   
- B)    the object to the right of the dot 
- C)    the object to the left of the dot  
- D)    the window object 

#### Answer:   (C) 

### Question 3

####  When a function is invoked as a constructor function like below, what does the keyword new bind this to?

```
function Ghost(saying){
  this.phrase = saying;
}

const myGhost = new Ghost('booooooo);
```

- A)    the window object 
- B)    it does not bind to anything 
- C)    the constructor function, Ghost
- D)    the newly created object, myGhost 

#### Answer:   (D) 

- Hints: (D)  The constructor function is used to create new objects. When a new object is created through a constructor, `this` will be binded to that new object.

### Question 4

####  This method returns a new function that can be invoked later.

- A) `.call`
- B) `.answer`
- C) `.bind`    
- D) `.apply`


#### Answer:   (C) 

- Hints: (C)  When doing explicit binding, .bind does not immediately run a function tied to an object. It will bind `this` to the object passed into the bind method and create a function to be invoked later.
- 
### Question 5

####  What do we use to create methods out of functions to be added to objects created by constructor functions?

- A) `.apply`
- B) `.call`
- C) `.prototype`    
- D) `.super`


#### Answer:   (C) 

- Hints: (C)  .prototype is to attach methods and other properties that can be added to objects.



</div>
</div>
