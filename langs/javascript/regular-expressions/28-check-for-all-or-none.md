---
layout: home
title: 28. Check for All or None
challengeType: 1
forumTopicId: 301338
dashedName: check-for-all-or-none
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Regular Expressions](./README.md)

[Before](./27-specify-exact-number-of-matches.md)  | [Next](./29-positive-and-negative-lookahead.md) 

Sometimes the patterns you want to search for may have parts of it that may or may not exist. However, it may be important to check for them nonetheless.

You can specify the possible existence of an element with a question mark, `?`. This checks for zero or one of the preceding element. You can think of this symbol as saying the previous element is optional.

For example, there are slight differences in American and British English and you can use the question mark to match both spellings.

```js
let american = "color";
let british = "colour";
let rainbowRegex= /colou?r/;
rainbowRegex.test(american);
rainbowRegex.test(british);
```

Both uses of the `test` method would return `true`.

## Instructions 

Change the regex `favRegex` to match both the American English (`favorite`) and the British English (`favourite`) version of the word.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 28-check-for-all-or-none.js %}

{% endhighlight %}

</div>
</div>