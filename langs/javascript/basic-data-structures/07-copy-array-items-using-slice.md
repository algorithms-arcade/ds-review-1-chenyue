---
layout: home
title: 07. Copy Array Items Using slice()
challengeType: 1
forumTopicId: 301158
dashedName: copy-array-items-using-slice
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Basic Data Structures](../basic-data-structures/README.md)

[Before](./06-add-items-using-splice.md)  | [Next](./08-copy-an-array-with-the-spread-operator.md)

The next method we will cover is `slice()`. Rather than modifying an array, `slice()` copies or *extracts* a given number of elements to a new array, leaving the array it is called upon untouched. `slice()` takes only 2 parameters — the first is the index at which to begin extraction, and the second is the index at which to stop extraction (extraction will occur up to, but not including the element at this index). Consider this:

```js
let weatherConditions = ['rain', 'snow', 'sleet', 'hail', 'clear'];

let todaysWeather = weatherConditions.slice(1, 3);
```

`todaysWeather` would have the value `['snow', 'sleet']`, while `weatherConditions` would still have `['rain', 'snow', 'sleet', 'hail', 'clear']`.

In effect, we have created a new array by extracting elements from an existing array.

##  instructions 

We have defined a function, `forecast`, that takes an array as an argument. Modify the function using `slice()` to extract information from the argument array and return a new array that contains the string elements `warm` and `sunny`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 07-copy-array-items-using-slice.js %}

{% endhighlight %}

</div>
</div>

