---
layout: home
title: Use typeof to Check the Type of a Variable
challengeType: 1
forumTopicId: 18374
dashedName: use-typeof-to-check-the-type-of-a-variable
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Debugging](README.html)

[Before](./understanding-the-differences-between-the-freecodecamp-and-browser-console.md)  | [Next](./catch-misspelled-variable-and-function-names.md)

You can use `typeof` to check the data structure, or type, of a variable. This is useful in debugging when working with multiple data types. If you think you're adding two numbers, but one is actually a string, the results can be unexpected. Type errors can lurk in calculations or function calls. Be careful especially when you're accessing and working with external data in the form of a JavaScript Object Notation (JSON) object.

Here are some examples using `typeof`:

```js
console.log(typeof "");
console.log(typeof 0);
console.log(typeof []);
console.log(typeof {});
```

In order, the console will display the strings `string`, `number`, `object`, and `object`.

JavaScript recognizes six primitive (immutable) data types: `Boolean`, `Null`, `Undefined`, `Number`, `String`, and `Symbol` (new with ES6) and one type for mutable items: `Object`. Note that in JavaScript, arrays are technically a type of object.

## Instructions 

Add two `console.log()` statements to check the `typeof` each of the two variables `seven` and `three` in the code.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative use-typeof-to-check-the-type-of-a-variable.js %}

{% endhighlight %}

</div>
</div>

