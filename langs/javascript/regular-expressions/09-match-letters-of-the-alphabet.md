---
layout: home
title: 9. Match Letters of the Alphabet
challengeType: 1
forumTopicId: 301354
dashedName: match-letters-of-the-alphabet
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Regular Expressions](./README.md)

[Before](./08-match-single-character-with-multiple-possibilities.md)  | [Next](./10-match-numbers-and-letters-of-the-alphabet.md) 

You saw how you can use <dfn>character sets</dfn> to specify a group of characters to match, but that's a lot of typing when you need to match a large range of characters (for example, every letter in the alphabet). Fortunately, there is a built-in feature that makes this short and simple.

Inside a character set, you can define a range of characters to match using a hyphen character: `-`.

For example, to match lowercase letters `a` through `e` you would use `[a-e]`.

```js
let catStr = "cat";
let batStr = "bat";
let matStr = "mat";
let bgRegex = /[a-e]at/;
catStr.match(bgRegex);
batStr.match(bgRegex);
matStr.match(bgRegex);
```

In order, the three `match` calls would return the values `["cat"]`, `["bat"]`, and `null`.

## Instructions 

Match all the letters in the string `quoteSample`.

**Note**: Be sure to match both uppercase and lowercase letters.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 09-match-letters-of-the-alphabet.js %}

{% endhighlight %}

</div>
</div>