---
layout: home
title: 09. Combine Arrays with the Spread Operator
challengeType: 1
forumTopicId: 301156
dashedName: combine-arrays-with-the-spread-operator
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Basic Data Structures](../basic-data-structures/README.md)

[Before](./08-copy-an-array-with-the-spread-operator.md)  | [Next](./10-check-for-the-presence-of-an-element-with-indexof.md)

Another huge advantage of the <dfn>spread</dfn> operator is the ability to combine arrays, or to insert all the elements of one array into another, at any index. With more traditional syntaxes, we can concatenate arrays, but this only allows us to combine arrays at the end of one, and at the start of another. Spread syntax makes the following operation extremely simple:

```js
let thisArray = ['sage', 'rosemary', 'parsley', 'thyme'];

let thatArray = ['basil', 'cilantro', ...thisArray, 'coriander'];
```

`thatArray` would have the value `['basil', 'cilantro', 'sage', 'rosemary', 'parsley', 'thyme', 'coriander']`.

Using spread syntax, we have just achieved an operation that would have been more complex and more verbose had we used traditional methods.

##  instructions 

We have defined a function `spreadOut` that returns the variable `sentence`. Modify the function using the <dfn>spread</dfn> operator so that it returns the array `['learning', 'to', 'code', 'is', 'fun']`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 09-combine-arrays-with-the-spread-operator.js %}

{% endhighlight %}

</div>
</div>


