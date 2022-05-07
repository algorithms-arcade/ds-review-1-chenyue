---
layout: home 
title: 14. Use Destructuring Assignment to Pass an Object as a Function's Parameters
challengeType: 1
forumTopicId: 301217
dashedName: use-destructuring-assignment-to-pass-an-object-as-a-functions-parameters
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[ES 6 -  JavaScript](./README.md) 

[Before](./13-use-destructuring-assignment-with-the-rest-parameter-to-reassign-array-elements.md)  | [Next](./15-create-strings-using-template-literals.md)

In some cases, you can destructure the object in a function argument itself.

Consider the code below:

```js
const profileUpdate = (profileData) => {
  const { name, age, nationality, location } = profileData;

}
```

This effectively destructures the object sent into the function. This can also be done in-place:

```js
const profileUpdate = ({ name, age, nationality, location }) => {

}
```

When `profileData` is passed to the above function, the values are destructured from the function parameter for use within the function.

##  Instructions 

Use destructuring assignment within the argument to the function `half` to send only `max` and `min` inside the function.


</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 14-use-destructuring-assignment-to-pass-an-object-as-a-functions-parameters.js %}

{% endhighlight %}

</div>
</div>

