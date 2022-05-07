---
layout: home
title: Selecting from Many Options with Switch Statements
challengeType: 1
videoUrl: 'https://scrimba.com/c/c4mv4fm'
forumTopicId: 18277
dashedName: selecting-from-many-options-with-switch-statements
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./golf-code.md)  | [Next](./adding-a-default-option-in-switch-statements.md) 

If you have many options to choose from, use a <dfn>switch</dfn> statement. A `switch` statement tests a value and can have many <dfn>case</dfn> statements which define various possible values. Statements are executed from the first matched `case` value until a `break` is encountered.

Here is an example of a `switch` statement:

```js
switch(lowercaseLetter) {
  case "a":
    console.log("A");
    break;
  case "b":
    console.log("B");
    break;
}
```

`case` values are tested with strict equality (`===`). The `break` tells JavaScript to stop executing statements. If the `break` is omitted, the next statement will be executed.

##  instructions 

Write a switch statement which tests `val` and sets `answer` for the following conditions:  
`1` - `alpha`  
`2` - `beta`  
`3` - `gamma`  
`4` - `delta`

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative selecting-from-many-options-with-switch-statements.js %}

{% endhighlight %}

</div>
</div>




```js
function caseInSwitch(val) {
  let answer = "";

  switch(val) {
    case 1:
      answer = "alpha";
      break;
    case 2:
      answer = "beta";
      break;
    case 3:
      answer = "gamma";
      break;
    case 4:
      answer = "delta";
  }
  return answer;
}
```
