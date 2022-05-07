---
layout: home
title: 14. Modify an Object Nested Within an Object
challengeType: 1
forumTopicId: 301164
dashedName: modify-an-object-nested-within-an-object
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Basic Data Structures](../basic-data-structures/README.md)

[Before](./13-add-key-value-pairs-to-javascript-objects.md)  | [Next](./15-access-property-names-with-bracket-notation.md)

Now let's take a look at a slightly more complex object. Object properties can be nested to an arbitrary depth, and their values can be any type of data supported by JavaScript, including arrays and even other objects. Consider the following:

```js
let nestedObject = {
  id: 28802695164,
  date: 'December 31, 2016',
  data: {
    totalUsers: 99,
    online: 80,
    onlineStatus: {
      active: 67,
      away: 13,
      busy: 8
    }
  }
};
```

`nestedObject` has three properties: `id` (value is a number), `date` (value is a string), and `data` (value is an object with its nested structure). While structures can quickly become complex, we can still use the same notations to access the information we need. To assign the value `10` to the `busy` property of the nested `onlineStatus` object, we use dot notation to reference the property:

```js
nestedObject.data.onlineStatus.busy = 10;
```

##  instructions 

Here we've defined an object `userActivity`, which includes another object nested within it. Set the value of the `online` key to `45`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 14-modify-an-object-nested-within-an-object.js %}

{% endhighlight %}

</div>
</div>

