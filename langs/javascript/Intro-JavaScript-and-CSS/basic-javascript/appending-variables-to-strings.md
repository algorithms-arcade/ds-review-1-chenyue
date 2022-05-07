---
layout: home
title: Appending Variables to Strings
challengeType: 1
videoUrl: 'https://scrimba.com/c/cbQmZfa'
forumTopicId: 16656
dashedName: appending-variables-to-strings
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./constructing-strings-with-variables.md)  | [Next](./find-the-length-of-a-string.md) 

Just as we can build a string over multiple lines out of string <dfn>literals</dfn>, we can also append variables to a string using the plus equals (`+=`) operator.

Example:

```js
const anAdjective = "awesome!";
let ourStr = "freeCodeCamp is ";
ourStr += anAdjective;
```

`ourStr` would have the value `freeCodeCamp is awesome!`.

##  instructions 

Set `someAdjective` to a string of at least 3 characters and append it to `myStr` using the `+=` operator.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative appending-variables-to-strings.js %}

{% endhighlight %}

</div>
</div>

