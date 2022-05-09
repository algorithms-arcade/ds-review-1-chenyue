---
layout: home 
title: 10. Use Destructuring Assignment to Assign Variables from Objects
challengeType: 1
forumTopicId: 301215
dashedName: use-destructuring-assignment-to-assign-variables-from-objects
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[ES 6 -  JavaScript](./README.md) 

[Before](./09-use-destructuring-assignment-to-extract-values-from-objects.md)  | [Next](./11-use-destructuring-assignment-to-assign-variables-from-nested-objects.md)

Destructuring allows you to assign a new variable name when extracting values. You can do this by putting the new name after a colon when assigning the value.

Using the same object from the last example:

```js
const user = { name: 'John Doe', age: 34 };
```

Here's how you can give new variable names in the assignment:

```js
const { name: userName, age: userAge } = user;
```

You may read it as "get the value of `user.name` and assign it to a new variable named `userName`" and so on. The value of `userName` would be the string `John Doe`, and the value of `userAge` would be the number `34`.

##  Instructions 

Replace the two assignments with an equivalent destructuring assignment. It should still assign the variables `highToday` and `highTomorrow` the values of `today` and `tomorrow` from the `HIGH_TEMPERATURES` object.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 10-use-destructuring-assignment-to-assign-variables-from-objects.js %}

{% endhighlight %}

</div>
</div>

