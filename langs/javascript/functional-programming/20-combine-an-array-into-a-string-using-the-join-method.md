---
layout: home
title: 20. Combine an Array into a String Using the join Method
challengeType: 1
forumTopicId: 18221
dashedName: combine-an-array-into-a-string-using-the-join-method
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home -  Functional Programming](./README.md) 

[Before](./19-split-a-string-into-an-array-using-the-split-method.md)  | [Next](./21-apply-functional-programming-to-convert-strings-to-url-slugs.md) 

The `join` method is used to join the elements of an array together to create a string. It takes an argument for the delimiter that is used to separate the array elements in the string.

Here's an example:

```js
var arr = ["Hello", "World"];
var str = arr.join(" ");
```

`str` would have a value of the string `Hello World`.
##  Instructions 

Use the `join` method (among others) inside the `sentensify` function to make a sentence from the words in the string `str`. The function should return a string. For example, `I-like-Star-Wars` would be converted to `I like Star Wars`. For this challenge, do not use the `replace` method.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 20-combine-an-array-into-a-string-using-the-join-method.js %}

{% endhighlight %}

</div>
</div>

