---
layout: home
title: Use Bracket Notation to Find the Last Character in a String
challengeType: 1
videoUrl: 'https://scrimba.com/c/cBZQGcv'
forumTopicId: 18342
dashedName: use-bracket-notation-to-find-the-last-character-in-a-string
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./use-bracket-notation-to-find-the-nth-character-in-a-string.md)  | [Next](./use-bracket-notation-to-find-the-nth-to-last-character-in-a-string.md) 

In order to get the last letter of a string, you can subtract one from the string's length.

For example, if `const firstName = "Ada"`, you can get the value of the last letter of the string by using `firstName[firstName.length - 1]`.

Example:

```js
const firstName = "Ada";
const lastLetter = firstName[firstName.length - 1];
```

`lastLetter` would have a value of the string `a`.

##  instructions 

Use <dfn>bracket notation</dfn> to find the last character in the `lastName` variable.

**Hint:** Try looking at the example above if you get stuck.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative use-bracket-notation-to-find-the-last-character-in-a-string.js %}

{% endhighlight %}

</div>
</div>

