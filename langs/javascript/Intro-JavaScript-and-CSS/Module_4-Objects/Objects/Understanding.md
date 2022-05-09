---
layout: home
title: Object - Check For Understanding 
#permalink: index.html # in case of we remove the index.md file, this doc will be the index page
---

<div class="row">
<div class="columnStmt" markdown="1">

[Home - Intro to JS](../README.md) 

[Previous](./Project.md)  | [Home - Intro to JS](../README.md) 

### Question 1

####  Which of the following is the correct way to declare an object?

-  A)   `Object = myObject{ }`
-  B)   `myObject = { }`
-  C)   `object myObject() = { }` 
-  D)   `const myObject = { }`    

#### Answer:   (D) 

- Hints: (D)  This is just one of those syntax things that's good to know. You can use any type of variable declaration with objects. Read more on [W3 schools](https://www.w3schools.com/js/js_objects.asp).

### Question 2

####  In the object below, what are name, username, and password called?
```
{
name: 'Megan',
username: 'megs56',
password: 'bubbles'
}
```

- A)   values   
- B)   objects   
- C)   keys 
- D)   variables 

#### Answer:   (C) 

- Hints: (C)  Keys are terms that identify the corresponding values and come before the `:`. In this case, `name`, `username`, and `password` are all keys. `Megan`, `megs56`, and `bubbles` are all values.

### Question 3

####  Which of the following is not a way to access the value 'megs56' in the object below?

```
var user = {
name: 'Megan',
username: 'megs56',
password: 'bubbles'
}
```

- A)    `user["username"]`
- B)    `user[username]` 
- C)    `user.username`


#### Answer:   (B) 

- Hints: (B)  Javascript interprets text without quotation marks as a variable name. Since username isn't defined in this example as a variable, this would return an error.

### Question 4

####  What's a correct syntax to add a value to the object below?

```
var user = {
name: 'Megan',
username: 'megs56',
password: 'bubbles'
}
```

- A) `user.lovesJavaScript === true;`
- B) `user.lovesJavaScript = true;`
- C) `lovesJavascript.user === true;`    
- D) `user[lovesJavaScript] = true`

#### Answer:   (B) 

- Hints: (B)  This is an example of using dot notation to add a key:value pair with a boolean value.

### Question 5

####  Why should we not use arrow functions inside of objects?

- A) because inside the arrow function, "this" is bound the key value pairs
- B) because the arrow function will return the window or the global object
- C) because inside the arrow function, "this" is not be bound to the object   
- D) you can't pass methods to other objects when using arrow functions


#### Answer:   (C) 

- Hints: (C)  






</div>
</div>
