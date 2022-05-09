---
layout: home
title: Practice comparing different values
challengeType: 1
videoUrl: 'https://scrimba.com/c/cm8PqCa'
forumTopicId: 301174
dashedName: practice-comparing-different-values
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./comparison-with-the-strict-equality-operator.md)  | [Next](./comparison-with-the-inequality-operator.md) 

In the last two challenges, we learned about the equality operator (`==`) and the strict equality operator (`===`). Let's do a quick review and practice using these operators some more.

If the values being compared are not of the same type, the equality operator will perform a type conversion, and then evaluate the values. However, the strict equality operator will compare both the data type and value as-is, without converting one type to the other.

**Examples**

`3 == '3'` returns `true` because JavaScript performs type conversion from string to number. `3 === '3'` returns false because the types are different and type conversion is not performed.

**Note:** In JavaScript, you can determine the type of a variable or a value with the `typeof` operator, as follows:

```js
typeof 3
typeof '3'
```

`typeof 3` returns the string `number`, and `typeof '3'` returns the string `string`.

##  instructions 

The `compareEquality` function in the editor compares two values using the equality operator. Modify the function so that it returns the string `Equal` only when the values are strictly equal.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative practice-comparing-different-values.js %}

{% endhighlight %}

</div>
</div>

