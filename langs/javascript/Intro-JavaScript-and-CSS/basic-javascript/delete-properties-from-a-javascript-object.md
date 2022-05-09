---
layout: home
title: Delete Properties from a JavaScript Object
challengeType: 1
videoUrl: 'https://scrimba.com/c/cDqKdTv'
forumTopicId: 17560
dashedName: delete-properties-from-a-javascript-object
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./add-new-properties-to-a-javascript-object.md)  | [Next](./using-objects-for-lookups.md) 

We can also delete properties from objects like this:

```js
delete ourDog.bark;
```

Example:

```js
const ourDog = {
  "name": "Camper",
  "legs": 4,
  "tails": 1,
  "friends": ["everything!"],
  "bark": "bow-wow"
};

delete ourDog.bark;
```

After the last line shown above, `ourDog` looks like:

```js
{
  "name": "Camper",
  "legs": 4,
  "tails": 1,
  "friends": ["everything!"]
}
```

##  instructions 

Delete the `tails` property from `myDog`. You may use either dot or bracket notation.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative delete-properties-from-a-javascript-object.js %}

{% endhighlight %}

</div>
</div>

