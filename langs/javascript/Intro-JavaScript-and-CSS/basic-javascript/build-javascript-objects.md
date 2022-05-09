---
layout: home
title: Build JavaScript Objects
challengeType: 1
videoUrl: 'https://scrimba.com/c/cWGkbtd'
forumTopicId: 16769
dashedName: build-javascript-objects
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./counting-cards.md)  | [Next](./accessing-object-properties-with-dot-notation.md) 

You may have heard the term `object` before.

Objects are similar to `arrays`, except that instead of using indexes to access and modify their data, you access the data in objects through what are called `properties`.

Objects are useful for storing data in a structured way, and can represent real world objects, like a cat.

Here's a sample cat object:

```js
const cat = {
  "name": "Whiskers",
  "legs": 4,
  "tails": 1,
  "enemies": ["Water", "Dogs"]
};
```

In this example, all the properties are stored as strings, such as `name`, `legs`, and `tails`. However, you can also use numbers as properties. You can even omit the quotes for single-word string properties, as follows:

```js
const anotherObject = {
  make: "Ford",
  5: "five",
  "model": "focus"
};
```

However, if your object has any non-string properties, JavaScript will automatically typecast them as strings.

##  instructions 

Make an object that represents a dog called `myDog` which contains the properties `name` (a string), `legs`, `tails` and `friends`.

You can set these object properties to whatever values you want, as long as `name` is a string, `legs` and `tails` are numbers, and `friends` is an array.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative build-javascript-objects.js %}

{% endhighlight %}

</div>
</div>

