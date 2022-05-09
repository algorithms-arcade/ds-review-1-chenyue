---
layout: home 
title: 06. Set Default Parameters for Your Functions
challengeType: 1
forumTopicId: 301209
dashedName: set-default-parameters-for-your-functions
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[ES 6 -  JavaScript](./README.md) 

[Before](./05-write-arrow-functions-with-parameters.md)  | [Next](./07-use-the-rest-parameter-with-function-parameters.md)

In order to help us create more flexible functions, ES6 introduces <dfn>default parameters</dfn> for functions.

Check out this code:

```js
const greeting = (name = "Anonymous") => "Hello " + name;

console.log(greeting("John"));
console.log(greeting());
```

The console will display the strings `Hello John` and `Hello Anonymous`.

The default parameter kicks in when the argument is not specified (it is undefined). As you can see in the example above, the parameter `name` will receive its default value `Anonymous` when you do not provide a value for the parameter. You can add default values for as many parameters as you want.

##  Instructions 

Modify the function `increment` by adding default parameters so that it will add 1 to `number` if `value` is not specified.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 06-set-default-parameters-for-your-functions.js %}

{% endhighlight %}

</div>
</div>


