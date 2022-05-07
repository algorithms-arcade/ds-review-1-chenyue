---
layout: home
title: Use Dot Notation to Access the Properties of an Object
challengeType: 1
forumTopicId: 301333
dashedName: use-dot-notation-to-access-the-properties-of-an-object
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Object Oriented Programming](./README.md)

[Before](./create-a-basic-javascript-object.md)  | [Next](./create-a-method-on-an-object.md) 

The last challenge created an object with various properties. Now you'll see how to access the values of those properties. Here's an example:

```js
let duck = {
  name: "Aflac",
  numLegs: 2
};
console.log(duck.name);
```

Dot notation is used on the object name, `duck`, followed by the name of the property, `name`, to access the value of `Aflac`.

##  Instructions 

Print both properties of the `dog` object to your console.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative use-dot-notation-to-access-the-properties-of-an-object.js %}

{% endhighlight %}

</div>
</div>

