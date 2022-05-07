---
layout: home
title: 32. Use Capture Groups to Search and Replace
challengeType: 1
forumTopicId: 301368
dashedName: use-capture-groups-to-search-and-replace
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Regular Expressions](./README.md)

[Before](./31-reuse-patterns-using-capture-groups.md)  | [Next](./33-remove-whitespace-from-start-and-end.md) 

Searching is useful. However, you can make searching even more powerful when it also changes (or replaces) the text you match.

You can search and replace text in a string using `.replace()` on a string. The inputs for `.replace()` is first the regex pattern you want to search for. The second parameter is the string to replace the match or a function to do something.

```js
let wrongText = "The sky is silver.";
let silverRegex = /silver/;
wrongText.replace(silverRegex, "blue");
```

The `replace` call would return the string `The sky is blue.`.

You can also access capture groups in the replacement string with dollar signs (`$`).

```js
"Code Camp".replace(/(\w+)\s(\w+)/, '$2 $1');
```

The `replace` call would return the string `Camp Code`.

## Instructions 

Write a regex `fixRegex` using three capture groups that will search for each word in the string `one two three`. Then update the `replaceText` variable to replace `one two three` with the string `three two one` and assign the result to the `result` variable. Make sure you are utilizing capture groups in the replacement string using the dollar sign (`$`) syntax.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 32-use-capture-groups-to-search-and-replace.js %}

{% endhighlight %}

</div>
</div>