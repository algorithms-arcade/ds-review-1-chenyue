---
layout: home
title: Understand the Immediately Invoked Function Expression (IIFE)
challengeType: 1
forumTopicId: 301328
dashedName: understand-the-immediately-invoked-function-expression-iife
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Object Oriented Programming](./README.md)

[Before](./use-closure-to-protect-properties-within-an-object-from-being-modified-externally.md)  | [Next](./use-an-iife-to-create-a-module.md) 

A common pattern in JavaScript is to execute a function as soon as it is declared:

```js
(function () {
  console.log("Chirp, chirp!");
})();
```

This is an anonymous function expression that executes right away, and outputs `Chirp, chirp!` immediately.

Note that the function has no name and is not stored in a variable. The two parentheses () at the end of the function expression cause it to be immediately executed or invoked. This pattern is known as an <dfn>immediately invoked function expression</dfn> or <dfn>IIFE</dfn>.

##  Instructions 

Rewrite the function `makeNest` and remove its call so instead it's an anonymous immediately invoked function expression (IIFE).

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative understand-the-immediately-invoked-function-expression-iife.js %}

{% endhighlight %}

</div>
</div>

