---
layout: home
title: Using Objects for Lookups
challengeType: 1
videoUrl: 'https://scrimba.com/c/cdBk8sM'
forumTopicId: 18373
dashedName: using-objects-for-lookups
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./delete-properties-from-a-javascript-object.md)  | [Next](./testing-objects-for-properties.md) 

Objects can be thought of as a key/value storage, like a dictionary. If you have tabular data, you can use an object to lookup values rather than a `switch` statement or an `if/else` chain. This is most useful when you know that your input data is limited to a certain range.

Here is an example of a simple reverse alphabet lookup:

```js
const alpha = {
  1:"Z",
  2:"Y",
  3:"X",
  4:"W",
  ...
  24:"C",
  25:"B",
  26:"A"
};

alpha[2];
alpha[24];

const value = 2;
alpha[value];
```

`alpha[2]` is the string `Y`, `alpha[24]` is the string `C`, and `alpha[value]` is the string `Y`.

##  instructions 

Convert the switch statement into an object called `lookup`. Use it to look up `val` and assign the associated string to the `result` variable.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative using-objects-for-lookups.js %}

{% endhighlight %}

</div>
</div>

