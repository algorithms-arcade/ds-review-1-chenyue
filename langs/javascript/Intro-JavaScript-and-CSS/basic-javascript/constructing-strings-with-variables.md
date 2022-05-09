---
layout: home
title: Constructing Strings with Variables
challengeType: 1
videoUrl: 'https://scrimba.com/c/cqk8rf4'
forumTopicId: 16805
dashedName: constructing-strings-with-variables
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./concatenating-strings-with-the-plus-equals-operator.md)  | [Next](./appending-variables-to-strings.md) 

Sometimes you will need to build a string, [Mad Libs](https://en.wikipedia.org/wiki/Mad_Libs) style. By using the concatenation operator (`+`), you can insert one or more variables into a string you're building.

Example:

```js
const ourName = "freeCodeCamp";
const ourStr = "Hello, our name is " + ourName + ", how are you?";
```

`ourStr` would have a value of the string `Hello, our name is freeCodeCamp, how are you?`.

##  instructions 

Set `myName` to a string equal to your name and build `myStr` with `myName` between the strings `My name is ` and ` and I am well!`


</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative constructing-strings-with-variables.js %}

{% endhighlight %}

</div>
</div>

