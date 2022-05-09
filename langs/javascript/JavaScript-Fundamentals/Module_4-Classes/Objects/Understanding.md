---
layout: home
title: Classes - Check For Understanding 
#permalink: index.html # in case of we remove the index.md file, this doc will be the index page
---

<div class="row">
<div class="columnStmt" markdown="1">

[Home - JavaScript Fundamentals](../README.md)

[Previous](./Project.md)  | [Home - JavaScript Fundamentals](../README.md)

### Question 1

####  Using class syntax, what keyword tells the Giraffe class know who its parent class is?
```
class Giraffe extends Animal {
  constructor(attributes){
    super(attributes)
  }
}
```

-  A)   class 
-  B)   super 
-  C)   subclass  
-  D)   extends     

#### Answer:   (D) 

### Question 2

####  what replaces `.call` and `.create` in class syntax below?
```
class Giraffe extends Animal {
  constructor(attributes){
    super(attributes)
  }
}
```

- A)    `super` and `extends`   
- B)    `super` and `addSubClass` 
- C)    nothing - they are the same  
- D)    nothing - these ideas are not used in class syntax 

#### Answer:   (A) 

### Question 3

####  Which of the following classes is correctly using the object received in the parameter `attributes`?

  - A)    
  ```
  class Parent{
    constructor(attributes){
        method.work = this.work;
      }// write methods here
    job(){
      return `My job is ${this.work}`;
    }
}
  ```

  - B)    
  ```
  class Parent{
    constructor(attributes){
    method.work = attributes.work;
    }// write methods here
    job(){
    return `My job is ${this.work}`;
    }
  }
  ```

  - C)    
  ```
  class Parent{
    constructor(attributes){
    attributes.work = this.work;
    }// write methods here
    job(){
    return `My job is ${this.work}`;
    }
  }
  ```

  - D)    
  ```
  class Parent{
    constructor(attributes){
    this.work = attributes.work;
    }// write methods here
    job(){
    return `My job is ${this.work}`;
    }
  }
  ``` 

#### Answer:   (D) 











[Previous](./Project.md) | [Module 1](./Object_1.md)
