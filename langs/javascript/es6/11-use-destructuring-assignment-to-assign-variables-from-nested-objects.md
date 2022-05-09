---
layout: home 
title: 11. Use Destructuring Assignment to Assign Variables from Nested Objects
challengeType: 1
forumTopicId: 301214
dashedName: use-destructuring-assignment-to-assign-variables-from-nested-objects
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[ES 6 -  JavaScript](./README.md) 

[Before](./10-use-destructuring-assignment-to-assign-variables-from-objects.md)  | [Next](./12-use-destructuring-assignment-to-assign-variables-from-arrays.md)

You can use the same principles from the previous two lessons to destructure values from nested objects.

Using an object similar to previous examples:

```js
const user = {
  johnDoe: { 
    age: 34,
    email: 'johnDoe@freeCodeCamp.com'
  }
};
```

Here's how to extract the values of object properties and assign them to variables with the same name:

```js
const { johnDoe: { age, email }} = user;
```

And here's how you can assign an object properties' values to variables with different names:

```js
const { johnDoe: { age: userAge, email: userEmail }} = user;
```

##  Instructions 

Replace the two assignments with an equivalent destructuring assignment. It should still assign the variables `lowToday` and `highToday` the values of `today.low` and `today.high` from the `LOCAL_FORECAST` object.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 11-use-destructuring-assignment-to-assign-variables-from-nested-objects.js %}

{% endhighlight %}

</div>
</div>

