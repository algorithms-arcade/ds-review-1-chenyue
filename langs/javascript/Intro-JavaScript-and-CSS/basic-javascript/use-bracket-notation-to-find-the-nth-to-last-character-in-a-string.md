---
layout: home
title: Use Bracket Notation to Find the Nth-to-Last Character in a String
challengeType: 1
videoUrl: 'https://scrimba.com/c/cw4vkh9'
forumTopicId: 18344
dashedName: use-bracket-notation-to-find-the-nth-to-last-character-in-a-string
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./use-bracket-notation-to-find-the-last-character-in-a-string.md)  | [Next](./word-blanks.md) 

You can use the same principle we just used to retrieve the last character in a string to retrieve the Nth-to-last character.

For example, you can get the value of the third-to-last letter of the `const firstName = "Augusta"` string by using `firstName[firstName.length - 3]`

Example:

```js
const firstName = "Augusta";
const thirdToLastLetter = firstName[firstName.length - 3];
```

`thirdToLastLetter` would have a value of the string `s`.

##  instructions 

Use <dfn>bracket notation</dfn> to find the second-to-last character in the `lastName` string.

**Hint:** Try looking at the example above if you get stuck.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative use-bracket-notation-to-find-the-nth-to-last-character-in-a-string.js %}

{% endhighlight %}

</div>
</div>

