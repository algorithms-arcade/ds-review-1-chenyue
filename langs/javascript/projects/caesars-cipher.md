---
layout: home 
title: Caesars Cipher
challengeType: 5
forumTopicId: 16003
dashedName: caesars-cipher
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Algorithms and Data Structures Projects](./README.md)

[Before](./roman-numeral-converter.md)  | [Next](./telephone-number-validator.md) 

One of the simplest and most widely known <dfn>ciphers</dfn> is a <dfn>Caesar cipher</dfn>, also known as a <dfn>shift cipher</dfn>. In a shift cipher the meanings of the letters are shifted by some set amount.

A common modern use is the [ROT13](https://en.wikipedia.org/wiki/ROT13) cipher, where the values of the letters are shifted by 13 places. Thus `A ↔ N`, `B ↔ O` and so on.

Write a function which takes a [ROT13](https://en.wikipedia.org/wiki/ROT13) encoded string as input and returns a decoded string.

All letters will be uppercase. Do not transform any non-alphabetic character (i.e. spaces, punctuation), but do pass them on.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative caesars-cipher.js %}

{% endhighlight %}

</div>
</div>

