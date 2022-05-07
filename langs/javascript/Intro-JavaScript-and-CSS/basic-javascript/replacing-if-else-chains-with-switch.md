---
layout: home
title: Replacing If Else Chains with Switch
challengeType: 1
videoUrl: 'https://scrimba.com/c/c3JE8fy'
forumTopicId: 18266
dashedName: replacing-if-else-chains-with-switch
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./multiple-identical-options-in-switch-statements.md)  | [Next](./returning-boolean-values-from-functions.md) 

If you have many options to choose from, a `switch` statement can be easier to write than many chained `if`/`else if` statements. The following:

```js
if (val === 1) {
  answer = "a";
} else if (val === 2) {
  answer = "b";
} else {
  answer = "c";
}
```

can be replaced with:

```js
switch(val) {
  case 1:
    answer = "a";
    break;
  case 2:
    answer = "b";
    break;
  default:
    answer = "c";
}
```

##  instructions 

Change the chained `if`/`else if` statements into a `switch` statement.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative replacing-if-else-chains-with-switch.js %}

{% endhighlight %}

</div>
</div>

