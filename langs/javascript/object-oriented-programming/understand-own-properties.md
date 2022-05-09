---
layout: home
title: Understand Own Properties
challengeType: 1
forumTopicId: 301326
dashedName: understand-own-properties
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Object Oriented Programming](./README.md)

[Before](./verify-an-objects-constructor-with-instanceof.md)  | [Next](./use-prototype-properties-to-reduce-duplicate-code.md) 

In the following example, the `Bird` constructor defines two properties: `name` and `numLegs`:

```js
function Bird(name) {
  this.name = name;
  this.numLegs = 2;
}

let duck = new Bird("Donald");
let canary = new Bird("Tweety");
```

`name` and `numLegs` are called <dfn>own properties</dfn>, because they are defined directly on the instance object. That means that `duck` and `canary` each has its own separate copy of these properties. In fact every instance of `Bird` will have its own copy of these properties. The following code adds all of the own properties of `duck` to the array `ownProps`:

```js
let ownProps = [];

for (let property in duck) {
  if(duck.hasOwnProperty(property)) {
    ownProps.push(property);
  }
}

console.log(ownProps);
```

The console would display the value `["name", "numLegs"]`.

##  Instructions 

Add the own properties of `canary` to the array `ownProps`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative understand-own-properties.js %}

{% endhighlight %}

</div>
</div>

