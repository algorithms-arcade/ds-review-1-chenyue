---
layout: home
title: Storing Values with the Assignment Operator
challengeType: 1
videoUrl: 'https://scrimba.com/c/cEanysE'
forumTopicId: 18310
dashedName: storing-values-with-the-assignment-operator
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./declare-javascript-variables.md)  | [Next](./assigning-the-value-of-one-variable-to-another.md) 

In JavaScript, you can store a value in a variable with the <dfn>assignment</dfn> operator (`=`).

```js
myVariable = 5;
```

This assigns the `Number` value `5` to `myVariable`.

If there are any calculations to the right of the `=` operator, those are performed before the value is assigned to the variable on the left of the operator.

```js
var myVar;
myVar = 5;
```

First, this code creates a variable named `myVar`. Then, the code assigns `5` to `myVar`. Now, if `myVar` appears again in the code, the program will treat it as if it is `5`.

##  instructions 

Assign the value `7` to variable `a`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative storing-values-with-the-assignment-operator.js %}

{% endhighlight %}

</div>
</div>

