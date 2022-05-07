---
layout: home
title: 17. Match Ending String Patterns
challengeType: 1
forumTopicId: 301352
dashedName: match-ending-string-patterns
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Regular Expressions](./README.md)

[Before](./16-match-beginning-string-patterns.md)  | [Next](./18-match-all-letters-and-numbers.md) 

In the last challenge, you learned to use the caret character to search for patterns at the beginning of strings. There is also a way to search for patterns at the end of strings.

You can search the end of strings using the dollar sign character `$` at the end of the regex.

```js
let theEnding = "This is a never ending story";
let storyRegex = /story$/;
storyRegex.test(theEnding);
let noEnding = "Sometimes a story will have to end";
storyRegex.test(noEnding);
```

The first `test` call would return `true`, while the second would return `false`.

## Instructions 

Use the anchor character (`$`) to match the string `caboose` at the end of the string `caboose`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 17-match-ending-string-patterns.js %}

{% endhighlight %}

</div>
</div>