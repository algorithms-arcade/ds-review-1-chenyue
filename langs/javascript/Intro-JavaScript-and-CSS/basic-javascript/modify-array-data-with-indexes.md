---
layout: home
title: Modify Array Data With Indexes
challengeType: 1
videoUrl: 'https://scrimba.com/c/czQM4A8'
forumTopicId: 18241
dashedName: modify-array-data-with-indexes
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./access-array-data-with-indexes.md)  | [Next](./access-multi-dimensional-arrays-with-indexes.md) 

Unlike strings, the entries of arrays are <dfn>mutable</dfn> and can be changed freely, even if the array was declared with `const`.

**Example**

```js
const ourArray = [50, 40, 30];
ourArray[0] = 15;
```

`ourArray` now has the value `[15, 40, 30]`.

**Note:** There shouldn't be any spaces between the array name and the square brackets, like `array [0]`. Although JavaScript is able to process this correctly, this may confuse other programmers reading your code.

##  instructions 

Modify the data stored at index `0` of `myArray` to a value of `45`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative modify-array-data-with-indexes.js %}

{% endhighlight %}

</div>
</div>

