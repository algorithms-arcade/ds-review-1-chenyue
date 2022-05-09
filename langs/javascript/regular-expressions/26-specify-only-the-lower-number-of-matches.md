---
layout: home
title: 26. Specify Only the Lower Number of Matches
challengeType: 1
forumTopicId: 301366
dashedName: specify-only-the-lower-number-of-matches
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Regular Expressions](./README.md)

[Before](./25-specify-upper-and-lower-number-of-matches.md)  | [Next](./27-specify-exact-number-of-matches.md) 

You can specify the lower and upper number of patterns with quantity specifiers using curly brackets. Sometimes you only want to specify the lower number of patterns with no upper limit.

To only specify the lower number of patterns, keep the first number followed by a comma.

For example, to match only the string `hah` with the letter `a` appearing at least `3` times, your regex would be `/ha{3,}h/`.

```js
let A4 = "haaaah";
let A2 = "haah";
let A100 = "h" + "a".repeat(100) + "h";
let multipleA = /ha{3,}h/;
multipleA.test(A4);
multipleA.test(A2);
multipleA.test(A100);
```

In order, the three `test` calls would return `true`, `false`, and `true`.

## Instructions 

Change the regex `haRegex` to match the word `Hazzah` only when it has four or more letter `z`'s.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 26-specify-only-the-lower-number-of-matches.js %}

{% endhighlight %}

</div>
</div>