---
layout: home
title: Concatenating Strings with the Plus Equals Operator
challengeType: 1
videoUrl: 'https://scrimba.com/c/cbQmmC4'
forumTopicId: 16803
dashedName: concatenating-strings-with-the-plus-equals-operator
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./concatenating-strings-with-plus-operator.md)  | [Next](./constructing-strings-with-variables.md) 

We can also use the `+=` operator to <dfn>concatenate</dfn> a string onto the end of an existing string variable. This can be very helpful to break a long string over several lines.

**Note:** Watch out for spaces. Concatenation does not add spaces between concatenated strings, so you'll need to add them yourself.

Example:

```js
let ourStr = "I come first. ";
ourStr += "I come second.";
```

`ourStr` now has a value of the string `I come first. I come second.`.

##  instructions 

Build `myStr` over several lines by concatenating these two strings: `This is the first sentence.` and `This is the second sentence.` using the `+=` operator. Use the `+=` operator similar to how it is shown in the example and be sure to include a space between the two strings. Start by assigning the first string to `myStr`, then add on the second string.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative concatenating-strings-with-the-plus-equals-operator.js %}

{% endhighlight %}

</div>
</div>

