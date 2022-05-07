---
layout: home
title: 7. Match Anything with Wildcard Period
challengeType: 1
forumTopicId: 301348
dashedName: match-anything-with-wildcard-period
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Regular Expressions](./README.md)

[Before](./06-find-more-than-the-first-match.md)  | [Next](08-match-single-character-with-multiple-possibilities.md/) 

Sometimes you won't (or don't need to) know the exact characters in your patterns. Thinking of all words that match, say, a misspelling would take a long time. Luckily, you can save time using the wildcard character: `.`

The wildcard character `.` will match any one character. The wildcard is also called `dot` and `period`. You can use the wildcard character just like any other character in the regex. For example, if you wanted to match `hug`, `huh`, `hut`, and `hum`, you can use the regex `/hu./` to match all four words.

```js
let humStr = "I'll hum a song";
let hugStr = "Bear hug";
let huRegex = /hu./;
huRegex.test(humStr);
huRegex.test(hugStr);
```

Both of these `test` calls would return `true`.

## Instructions 

Complete the regex `unRegex` so that it matches the strings `run`, `sun`, `fun`, `pun`, `nun`, and `bun`. Your regex should use the wildcard character.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 07-match-anything-with-wildcard-period.js %}

{% endhighlight %}

</div>
</div>