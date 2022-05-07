---
layout: home
title: Write Reusable JavaScript with Functions
challengeType: 1
videoUrl: 'https://scrimba.com/c/cL6dqfy'
forumTopicId: 18378
dashedName: write-reusable-javascript-with-functions
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./shopping-list.md)  | [Next](./passing-values-to-functions-with-arguments.md) 

In JavaScript, we can divide up our code into reusable parts called <dfn>functions</dfn>.

Here's an example of a function:

```js
function functionName() {
  console.log("Hello World");
}
```

You can call or <dfn>invoke</dfn> this function by using its name followed by parentheses, like this: `functionName();` Each time the function is called it will print out the message `Hello World` on the dev console. All of the code between the curly braces will be executed every time the function is called.

##  instructions 

<ol>
  <li>
    Create a function called <code>reusableFunction</code> which prints the string <code>Hi World</code> to the dev console.
  </li>
  <li>
    Call the function.
  </li>
</ol>

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative write-reusable-javascript-with-functions.js %}

{% endhighlight %}

</div>
</div>

