---
layout: home
title: Access Array Data with Indexes
challengeType: 1
videoUrl: 'https://scrimba.com/c/cBZQbTz'
forumTopicId: 16158
dashedName: access-array-data-with-indexes
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./nest-one-array-within-another-array.md)  | [Next](./modify-array-data-with-indexes.md) 

We can access the data inside arrays using <dfn>indexes</dfn>.

Array indexes are written in the same bracket notation that strings use, except that instead of specifying a character, they are specifying an entry in the array. Like strings, arrays use <dfn>zero-based</dfn> indexing, so the first element in an array has an index of `0`.

<br>

**Example**

```js
const array = [50, 60, 70];
console.log(array[0]);
const data = array[1];
```

The `console.log(array[0])` prints `50`, and `data` has the value `60`.

##  instructions 

Create a variable called `myData` and set it to equal the first value of `myArray` using bracket notation.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative access-array-data-with-indexes.js %}

{% endhighlight %}

</div>
</div>

