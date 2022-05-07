---
layout: home
title: 18. Iterate Through the Keys of an Object with a for...in Statement
challengeType: 1
forumTopicId: 301162
dashedName: iterate-through-the-keys-of-an-object-with-a-for---in-statement
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Basic Data Structures](../basic-data-structures/README.md)

[Before](./17-check-if-an-object-has-a-property.md)  | [Next](./19-generate-an-array-of-all-object-keys-with-object.keys.md)

Sometimes you may need to iterate through all the keys within an object. This requires a specific syntax in JavaScript called a <dfn>for...in</dfn> statement. For our `users` object, this could look like:

```js
for (let user in users) {
  console.log(user);
}
```

This would log `Alan`, `Jeff`, `Sarah`, and `Ryan` - each value on its own line.

In this statement, we defined a variable `user`, and as you can see, this variable was reset during each iteration to each of the object's keys as the statement looped through the object, resulting in each user's name being printed to the console.

**NOTE:** Objects do not maintain an ordering to stored keys like arrays do; thus a key's position on an object, or the relative order in which it appears, is irrelevant when referencing or accessing that key.

##  instructions 

We've defined a function `countOnline` which accepts one argument (a users object). Use a <dfn>for...in</dfn> statement within this function to loop through the users object passed into the function and return the number of users whose `online` property is set to `true`. An example of a users object which could be passed to `countOnline` is shown below. Each user will have an `online` property with either a `true` or `false` value.

```js
{
  Alan: {
    online: false
  },
  Jeff: {
    online: true
  },
  Sarah: {
    online: false
  }
}
```

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 18-iterate-through-the-keys-of-an-object-with-a-for-in-statement.js %}

{% endhighlight %}

</div>
</div>


