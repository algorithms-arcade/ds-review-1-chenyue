---
layout: home 
title: 29. Handle a Rejected Promise with catch
challengeType: 1
forumTopicId: 301204
dashedName: handle-a-rejected-promise-with-catch
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - ES6](../es6/README.md) 

[Before](./28-handle-a-fulfilled-promise-with-then.md)  | [Home - ES6](../es6/README.md) 

`catch` is the method used when your promise has been rejected. It is executed immediately after a promise's `reject` method is called. Here’s the syntax:

```js
myPromise.catch(error => {
  
});
```

`error` is the argument passed in to the `reject` method.

##  Instructions

Add the `catch` method to your promise. Use `error` as the parameter of its callback function and log `error` to the console.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 29-handle-a-rejected-promise-with-catch.js %}

{% endhighlight %}

</div>
</div>

