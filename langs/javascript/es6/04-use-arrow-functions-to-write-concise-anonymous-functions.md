---
layout: home 
title: 04. Use Arrow Functions to Write Concise Anonymous Functions
challengeType: 1
forumTopicId: 301211
dashedName: use-arrow-functions-to-write-concise-anonymous-functions
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[ES 6 -  JavaScript](./README.md) 

[Before](./03-prevent-object-mutation.md)  | [Next](./05-write-arrow-functions-with-parameters.md)

In JavaScript, we often don't need to name our functions, especially when passing a function as an argument to another function. Instead, we create inline functions. We don't need to name these functions because we do not reuse them anywhere else.

To achieve this, we often use the following syntax:

```js
const myFunc = function() {
  const myVar = "value";
  return myVar;
}
```

ES6 provides us with the syntactic sugar to not have to write anonymous functions this way. Instead, you can use **arrow function syntax**:

```js
const myFunc = () => {
  const myVar = "value";
  return myVar;
}
```

When there is no function body, and only a return value, arrow function syntax allows you to omit the keyword `return` as well as the brackets surrounding the code. This helps simplify smaller functions into one-line statements:

```js
const myFunc = () => "value";
```

This code will still return the string `value` by default.

##  Instructions 

Rewrite the function assigned to the variable `magic` which returns a `new Date()` to use arrow function syntax. Also, make sure nothing is defined using the keyword `var`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 04-use-arrow-functions-to-write-concise-anonymous-functions.js %}

{% endhighlight %}

</div>
</div>

