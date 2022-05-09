---
layout: home
title: Use the parseInt Function with a Radix
challengeType: 1
videoUrl: 'https://scrimba.com/c/c6K4Kh3'
forumTopicId: 301182
dashedName: use-the-parseint-function-with-a-radix
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./use-the-parseint-function.md)  | [Next](./use-the-conditional-ternary-operator.md) 

The `parseInt()` function parses a string and returns an integer. It takes a second argument for the radix, which specifies the base of the number in the string. The radix can be an integer between 2 and 36.

The function call looks like:

```js
parseInt(string, radix);
```

And here's an example:

```js
const a = parseInt("11", 2);
```

The radix variable says that `11` is in the binary system, or base 2. This example converts the string `11` to an integer `3`.

##  instructions 

Use `parseInt()` in the `convertToInteger` function so it converts a binary number to an integer and returns it.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative use-the-parseint-function-with-a-radix.js %}

{% endhighlight %}

</div>
</div>

