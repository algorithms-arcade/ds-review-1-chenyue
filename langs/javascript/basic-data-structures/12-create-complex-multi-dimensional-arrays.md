---
layout: home
title: 12. Create complex multi-dimensional arrays
challengeType: 1
forumTopicId: 301159
dashedName: create-complex-multi-dimensional-arrays
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Basic Data Structures](../basic-data-structures/README.md)

[Before](./11-iterate-through-all-an-arrays-items-using-for-loops.md)  | [Next](./13-add-key-value-pairs-to-javascript-objects.md)

Awesome! You have just learned a ton about arrays! This has been a fairly high level overview, and there is plenty more to learn about working with arrays, much of which you will see in later sections. But before moving on to looking at <dfn>Objects</dfn>, lets take one more look, and see how arrays can become a bit more complex than what we have seen in previous challenges.

One of the most powerful features when thinking of arrays as data structures, is that arrays can contain, or even be completely made up of other arrays. We have seen arrays that contain arrays in previous challenges, but fairly simple ones. However, arrays can contain an infinite depth of arrays that can contain other arrays, each with their own arbitrary levels of depth, and so on. In this way, an array can very quickly become a very complex data structure, known as a <dfn>multi-dimensional</dfn>, or nested array. Consider the following example:

```js
let nestedArray = [
  ['deep'],
  [
    ['deeper'], ['deeper'] 
  ],
  [
    [
      ['deepest'], ['deepest']
    ],
    [
      [
        ['deepest-est?']
      ]
    ]
  ]
];
```

The `deep` array is nested 2 levels deep. The `deeper` arrays are 3 levels deep. The `deepest` arrays are 4 levels, and the `deepest-est?` is 5.

While this example may seem convoluted, this level of complexity is not unheard of, or even unusual, when dealing with large amounts of data. However, we can still very easily access the deepest levels of an array this complex with bracket notation:

```js
console.log(nestedArray[2][1][0][0][0]);
```

This logs the string `deepest-est?`. And now that we know where that piece of data is, we can reset it if we need to:

```js
nestedArray[2][1][0][0][0] = 'deeper still';

console.log(nestedArray[2][1][0][0][0]);
```

Now it logs `deeper still`.

##  instructions 

We have defined a variable, `myNestedArray`, set equal to an array. Modify `myNestedArray`, using any combination of <dfn>strings</dfn>, <dfn>numbers</dfn>, and <dfn>booleans</dfn> for data elements, so that it has exactly five levels of depth (remember, the outer-most array is level 1). Somewhere on the third level, include the string `deep`, on the fourth level, include the string `deeper`, and on the fifth level, include the string `deepest`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 12-create-complex-multi-dimensional-arrays.js %}

{% endhighlight %}

</div>
</div>

