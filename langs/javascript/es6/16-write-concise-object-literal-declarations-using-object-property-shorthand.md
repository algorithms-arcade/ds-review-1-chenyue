---
layout: home 
title: 16. Write Concise Object Literal Declarations Using Object Property Shorthand
challengeType: 1
forumTopicId: 301225
dashedName: write-concise-object-literal-declarations-using-object-property-shorthand
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[ES 6 -  JavaScript](./README.md) 

[Before](./15-create-strings-using-template-literals.md)  | [Next](./17-write-concise-declarative-functions-with-es6.md)

ES6 adds some nice support for easily defining object literals.

Consider the following code:

```js
const getMousePosition = (x, y) => ({
  x: x,
  y: y
});
```

`getMousePosition` is a simple function that returns an object containing two properties. ES6 provides the syntactic sugar to eliminate the redundancy of having to write `x: x`. You can simply write `x` once, and it will be converted to`x: x` (or something equivalent) under the hood. Here is the same function from above rewritten to use this new syntax:

```js
const getMousePosition = (x, y) => ({ x, y });
```

##  Instructions 

Use object property shorthand with object literals to create and return an object with `name`, `age` and `gender` properties.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 16-write-concise-object-literal-declarations-using-object-property-shorthand.js %}

{% endhighlight %}

</div>
</div>

