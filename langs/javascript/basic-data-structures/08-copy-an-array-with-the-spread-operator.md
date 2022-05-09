---
layout: home
title: 08. Copy an Array with the Spread Operator
challengeType: 1
forumTopicId: 301157
dashedName: copy-an-array-with-the-spread-operator
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Basic Data Structures](../basic-data-structures/README.md)

[Before](./07-copy-array-items-using-slice.md)  | [Next](./09-combine-arrays-with-the-spread-operator.md)

While `slice()` allows us to be selective about what elements of an array to copy, among several other useful tasks, ES6's new <dfn>spread operator</dfn> allows us to easily copy *all* of an array's elements, in order, with a simple and highly readable syntax. The spread syntax simply looks like this: `...`

In practice, we can use the spread operator to copy an array like so:

```js
let thisArray = [true, true, undefined, false, null];
let thatArray = [...thisArray];
```

`thatArray` equals `[true, true, undefined, false, null]`. `thisArray` remains unchanged and `thatArray` contains the same elements as `thisArray`.

##  instructions 

We have defined a function, `copyMachine` which takes `arr` (an array) and `num` (a number) as arguments. The function is supposed to return a new array made up of `num` copies of `arr`. We have done most of the work for you, but it doesn't work quite right yet. Modify the function using spread syntax so that it works correctly (hint: another method we have already covered might come in handy here!).

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 08-copy-an-array-with-the-spread-operator.js %}

{% endhighlight %}

</div>
</div>


