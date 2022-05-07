---
layout: home
title: Multiple Identical Options in Switch Statements
challengeType: 1
videoUrl: 'https://scrimba.com/c/cdBKWCV'
forumTopicId: 18242
dashedName: multiple-identical-options-in-switch-statements
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./adding-a-default-option-in-switch-statements.md)  | [Next](./replacing-if-else-chains-with-switch.md) 

If the `break` statement is omitted from a `switch` statement's `case`, the following `case` statement(s) are executed until a `break` is encountered. If you have multiple inputs with the same output, you can represent them in a `switch` statement like this:

```js
let result = "";
switch(val) {
  case 1:
  case 2:
  case 3:
    result = "1, 2, or 3";
    break;
  case 4:
    result = "4 alone";
}
```

Cases for 1, 2, and 3 will all produce the same result.

##  instructions 

Write a switch statement to set `answer` for the following ranges:  
`1-3` - `Low`  
`4-6` - `Mid`  
`7-9` - `High`

**Note:** You will need to have a `case` statement for each number in the range.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative multiple-identical-options-in-switch-statements.js %}

{% endhighlight %}

</div>
</div>

