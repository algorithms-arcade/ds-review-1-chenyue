---
layout: home
title: 01. Use an Array to Store a Collection of Data
challengeType: 1
forumTopicId: 301167
dashedName: use-an-array-to-store-a-collection-of-data
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Basic Data Structures](README.html)

[Home - Basic Data Structures](README.html)  | [Next](./02-access-an-arrays-contents-using-bracket-notation.md)

The below is an example of the simplest implementation of an array data structure. This is known as a <dfn>one-dimensional array</dfn>, meaning it only has one level, or that it does not have any other arrays nested within it. Notice it contains <dfn>booleans</dfn>, <dfn>strings</dfn>, and <dfn>numbers</dfn>, among other valid JavaScript data types:

```js
let simpleArray = ['one', 2, 'three', true, false, undefined, null];
console.log(simpleArray.length);
```

The `console.log` call displays `7`.

All arrays have a length property, which as shown above, can be very easily accessed with the syntax `Array.length`. A more complex implementation of an array can be seen below. This is known as a <dfn>multi-dimensional array</dfn>, or an array that contains other arrays. Notice that this array also contains JavaScript <dfn>objects</dfn>, which we will examine very closely in our next section, but for now, all you need to know is that arrays are also capable of storing complex objects.

```js
let complexArray = [
  [
    {
      one: 1,
      two: 2
    },
    {
      three: 3,
      four: 4
    }
  ],
  [
    {
      a: "a",
      b: "b"
    },
    {
      c: "c",
      d: "d"
    }
  ]
];
```

##  instructions 

We have defined a variable called `yourArray`. Complete the statement by assigning an array of at least 5 elements in length to the `yourArray` variable. Your array should contain at least one <dfn>string</dfn>, one <dfn>number</dfn>, and one <dfn>boolean</dfn>.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 01-use-an-array-to-store-a-collection-of-data.js %}

{% endhighlight %}

</div>
</div>

