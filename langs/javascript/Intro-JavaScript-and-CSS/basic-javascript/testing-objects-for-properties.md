---
layout: home
title: Testing Objects for Properties
challengeType: 1
forumTopicId: 18324
dashedName: testing-objects-for-properties
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./using-objects-for-lookups.md)  | [Next](./manipulating-complex-objects.md) 

Sometimes it is useful to check if the property of a given object exists or not. We can use the `.hasOwnProperty(propname)` method of objects to determine if that object has the given property name. `.hasOwnProperty()` returns `true` or `false` if the property is found or not.

**Example**

```js
const myObj = {
  top: "hat",
  bottom: "pants"
};

myObj.hasOwnProperty("top");
myObj.hasOwnProperty("middle");
```

The first `hasOwnProperty` returns `true`, while the second returns `false`.

##  instructions 

Modify the function `checkObj` to test if an object passed to the function (`obj`) contains a specific property (`checkProp`). If the property is found, return that property's value. If not, return `"Not Found"`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative testing-objects-for-properties.js %}

{% endhighlight %}

</div>
</div>

