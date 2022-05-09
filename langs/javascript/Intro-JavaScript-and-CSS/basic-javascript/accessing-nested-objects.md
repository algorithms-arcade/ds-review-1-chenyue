---
layout: home
title: Accessing Nested Objects
challengeType: 1
videoUrl: 'https://scrimba.com/c/cRnRnfa'
forumTopicId: 16161
dashedName: accessing-nested-objects
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./manipulating-complex-objects.md)  | [Next](./accessing-nested-arrays.md) 

The sub-properties of objects can be accessed by chaining together the dot or bracket notation.

Here is a nested object:

```js
const ourStorage = {
  "desk": {
    "drawer": "stapler"
  },
  "cabinet": {
    "top drawer": { 
      "folder1": "a file",
      "folder2": "secrets"
    },
    "bottom drawer": "soda"
  }
};

ourStorage.cabinet["top drawer"].folder2;
ourStorage.desk.drawer;
```

`ourStorage.cabinet["top drawer"].folder2` would be the string `secrets`, and `ourStorage.desk.drawer` would be the string `stapler`.

##  instructions 

Access the `myStorage` object and assign the contents of the `glove box` property to the `gloveBoxContents` variable. Use dot notation for all properties where possible, otherwise use bracket notation.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative accessing-nested-objects.js %}

{% endhighlight %}

</div>
</div>

