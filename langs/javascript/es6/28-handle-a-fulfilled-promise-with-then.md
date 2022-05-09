---
layout: home 
title: 28. Handle a Fulfilled Promise with then
challengeType: 1
forumTopicId: 301203
dashedName: handle-a-fulfilled-promise-with-then
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[ES 6 -  JavaScript](./README.md) 

[Before](./27-complete-a-promise-with-resolve-and-reject.md)  | [Next](./29-handle-a-rejected-promise-with-catch.md)

Promises are most useful when you have a process that takes an unknown amount of time in your code (i.e. something asynchronous), often a server request. When you make a server request it takes some amount of time, and after it completes you usually want to do something with the response from the server. This can be achieved by using the `then` method. The `then` method is executed immediately after your promise is fulfilled with `resolve`. Here’s an example:

```js
myPromise.then(result => {
  
});
```

`result` comes from the argument given to the `resolve` method.

##  Instructions

Add the `then` method to your promise. Use `result` as the parameter of its callback function and log `result` to the console.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 28-handle-a-fulfilled-promise-with-then.js %}

{% endhighlight %}

</div>
</div>

