---
layout: home 
title: 17. Write Concise Declarative Functions with ES6
challengeType: 1
forumTopicId: 301224
dashedName: write-concise-declarative-functions-with-es6
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[ES 6 -  JavaScript](./README.md) 

[Before](./16-write-concise-object-literal-declarations-using-object-property-shorthand.md)  | [Next](./18-use-class-syntax-to-define-a-constructor-function.md)

When defining functions within objects in ES5, we have to use the keyword `function` as follows:

```js
const person = {
  name: "Taylor",
  sayHello: function() {
    return `Hello! My name is ${this.name}.`;
  }
};
```

With ES6, you can remove the `function` keyword and colon altogether when defining functions in objects. Here's an example of this syntax:

```js
const person = {
  name: "Taylor",
  sayHello() {
    return `Hello! My name is ${this.name}.`;
  }
};
```

##  Instructions

Refactor the function `setGear` inside the object `bicycle` to use the shorthand syntax described above.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 17-write-concise-declarative-functions-with-es6.js %}

{% endhighlight %}

</div>
</div>


