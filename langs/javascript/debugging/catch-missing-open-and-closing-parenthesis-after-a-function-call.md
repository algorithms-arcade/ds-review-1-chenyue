---
layout: home
title: Catch Missing Open and Closing Parenthesis After a Function Call
challengeType: 1
forumTopicId: 301185
dashedName: catch-missing-open-and-closing-parenthesis-after-a-function-call
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Debugging](README.html)

[Before](./catch-use-of-assignment-operator-instead-of-equality-operator.md)  | [Next](./catch-arguments-passed-in-the-wrong-order-when-calling-a-function.md)

When a function or method doesn't take any arguments, you may forget to include the (empty) opening and closing parentheses when calling it. Often times the result of a function call is saved in a variable for other use in your code. This error can be detected by logging variable values (or their types) to the console and seeing that one is set to a function reference, instead of the expected value the function returns.

The variables in the following example are different:

```js
function myFunction() {
  return "You rock!";
}
let varOne = myFunction;
let varTwo = myFunction();
```

Here `varOne` is the function `myFunction`, and `varTwo` is the string `You rock!`.

## Instructions 

Fix the code so the variable `result` is set to the value returned from calling the function `getNine`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative catch-missing-open-and-closing-parenthesis-after-a-function-call.js %}

{% endhighlight %}

</div>
</div>

