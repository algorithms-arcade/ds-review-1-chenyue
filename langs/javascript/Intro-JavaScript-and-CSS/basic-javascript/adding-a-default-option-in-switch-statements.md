---
layout: home
title: Adding a Default Option in Switch Statements
challengeType: 1
videoUrl: 'https://scrimba.com/c/c3JvVfg'
forumTopicId: 16653
dashedName: adding-a-default-option-in-switch-statements
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./selecting-from-many-options-with-switch-statements.md)  | [Next](./multiple-identical-options-in-switch-statements.md) 

In a `switch` statement you may not be able to specify all possible values as `case` statements. Instead, you can add the `default` statement which will be executed if no matching `case` statements are found. Think of it like the final `else` statement in an `if/else` chain.

A `default` statement should be the last case.

```js
switch (num) {
  case value1:
    statement1;
    break;
  case value2:
    statement2;
    break;
...
  default:
    defaultStatement;
    break;
}
```

##  instructions 

Write a switch statement to set `answer` for the following conditions:  
`a` - `apple`  
`b` - `bird`  
`c` - `cat`  
`default` - `stuff`

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative adding-a-default-option-in-switch-statements.js %}

{% endhighlight %}

</div>
</div>

