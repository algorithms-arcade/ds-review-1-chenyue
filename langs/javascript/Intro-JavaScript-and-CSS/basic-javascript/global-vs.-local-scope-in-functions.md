---
layout: home
title: Global vs. Local Scope in Functions
challengeType: 1
videoUrl: 'https://scrimba.com/c/c2QwKH2'
forumTopicId: 18194
dashedName: global-vs--local-scope-in-functions
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./local-scope-and-functions.md)  | [Next](./understanding-undefined-value-returned-from-a-function.md) 

It is possible to have both <dfn>local</dfn> and <dfn>global</dfn> variables with the same name. When you do this, the local variable takes precedence over the global variable.

In this example:

```js
const someVar = "Hat";

function myFun() {
  const someVar = "Head";
  return someVar;
}
```

The function `myFun` will return the string `Head` because the local version of the variable is present.

##  instructions 

Add a local variable to `myOutfit` function to override the value of `outerWear` with the string `sweater`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative global-vs.-local-scope-in-functions.js %}

{% endhighlight %}

</div>
</div>


