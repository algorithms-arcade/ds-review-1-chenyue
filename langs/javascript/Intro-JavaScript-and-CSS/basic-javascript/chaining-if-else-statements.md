---
layout: home
title: Chaining If Else Statements
challengeType: 1
videoUrl: 'https://scrimba.com/c/caeJgsw'
forumTopicId: 16772
dashedName: chaining-if-else-statements
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./logical-order-in-if-else-statements.md)  | [Next](./golf-code.md) 

`if/else` statements can be chained together for complex logic. Here is <dfn>pseudocode</dfn> of multiple chained `if` / `else if` statements:

```js
if (condition1) {
  statement1
} else if (condition2) {
  statement2
} else if (condition3) {
  statement3
. . .
} else {
  statementN
}
```

##  instructions 

Write chained `if`/`else if` statements to fulfill the following conditions:

`num < 5` - return `Tiny`  
`num < 10` - return `Small`  
`num < 15` - return `Medium`  
`num < 20` - return `Large`  
`num >= 20` - return `Huge`

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative chaining-if-else-statements.js %}

{% endhighlight %}

</div>
</div>

