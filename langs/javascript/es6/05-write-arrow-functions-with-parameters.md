---
layout: home 
title: 05. Write Arrow Functions with Parameters
challengeType: 1
forumTopicId: 301223
dashedName: write-arrow-functions-with-parameters
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[ES 6 -  JavaScript](./README.md) 

[Before](./04-use-arrow-functions-to-write-concise-anonymous-functions.md)  | [Next](./06-set-default-parameters-for-your-functions.md)

Just like a regular function, you can pass arguments into an arrow function.

```js
const doubler = (item) => item * 2;
doubler(4);
```

`doubler(4)` would return the value `8`.

If an arrow function has a single parameter, the parentheses enclosing the parameter may be omitted.

```js
const doubler = item => item * 2;
```

It is possible to pass more than one argument into an arrow function.

```js
const multiplier = (item, multi) => item * multi;
multiplier(4, 2);
```

`multiplier(4, 2)` would return the value `8`.

##  Instructions 

Rewrite the `myConcat` function which appends contents of `arr2` to `arr1` so that the function uses arrow function syntax.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 05-write-arrow-functions-with-parameters.js %}

{% endhighlight %}

</div>
</div>

