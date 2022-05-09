---
layout: home
title: 19. Split a String into an Array Using the split Method
challengeType: 1
forumTopicId: 18305
dashedName: split-a-string-into-an-array-using-the-split-method
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home -  Functional Programming](./README.md) 

[Before](./18-return-a-sorted-array-without-changing-the-original-array.md)  | [Next](./20-combine-an-array-into-a-string-using-the-join-method.md) 

The `split` method splits a string into an array of strings. It takes an argument for the delimiter, which can be a character to use to break up the string or a regular expression. For example, if the delimiter is a space, you get an array of words, and if the delimiter is an empty string, you get an array of each character in the string.

Here are two examples that split one string by spaces, then another by digits using a regular expression:

```js
var str = "Hello World";
var bySpace = str.split(" ");

var otherString = "How9are7you2today";
var byDigits = otherString.split(/\d/);
```

`bySpace` would have the value `["Hello", "World"]` and `byDigits` would have the value `["How", "are", "you", "today"]`.

Since strings are immutable, the `split` method makes it easier to work with them.

##  Instructions 

Use the `split` method inside the `splitify` function to split `str` into an array of words. The function should return the array. Note that the words are not always separated by spaces, and the array should not contain punctuation.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 19-split-a-string-into-an-array-using-the-split-method.js %}

{% endhighlight %}

</div>
</div>


