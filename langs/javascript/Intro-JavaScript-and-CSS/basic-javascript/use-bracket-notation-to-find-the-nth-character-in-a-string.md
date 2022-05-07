---
layout: home
title: Use Bracket Notation to Find the Nth Character in a String
challengeType: 1
videoUrl: 'https://scrimba.com/c/cWPVJua'
forumTopicId: 18343
dashedName: use-bracket-notation-to-find-the-nth-character-in-a-string
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./understand-string-immutability.md)  | [Next](./use-bracket-notation-to-find-the-last-character-in-a-string.md) 

You can also use <dfn>bracket notation</dfn> to get the character at other positions within a string.

Remember that computers start counting at `0`, so the first character is actually the zeroth character.

Example:

```js
const firstName = "Ada";
const secondLetterOfFirstName = firstName[1];
```

`secondLetterOfFirstName` would have a value of the string `d`.

##  instructions 

Let's try to set `thirdLetterOfLastName` to equal the third letter of the `lastName` variable using bracket notation.

**Hint:** Try looking at the example above if you get stuck.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative use-bracket-notation-to-find-the-nth-character-in-a-string.js %}

{% endhighlight %}

</div>
</div>

