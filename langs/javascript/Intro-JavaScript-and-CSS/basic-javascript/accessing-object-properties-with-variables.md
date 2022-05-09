---
layout: home
title: Accessing Object Properties with Variables
challengeType: 1
videoUrl: 'https://scrimba.com/c/cnQyKur'
forumTopicId: 16165
dashedName: accessing-object-properties-with-variables
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./accessing-object-properties-with-bracket-notation.md)  | [Next](./updating-object-properties.md) 

Another use of bracket notation on objects is to access a property which is stored as the value of a variable. This can be very useful for iterating through an object's properties or when accessing a lookup table.

Here is an example of using a variable to access a property:

```js
const dogs = {
  Fido: "Mutt",
  Hunter: "Doberman",
  Snoopie: "Beagle"
};

const myDog = "Hunter";
const myBreed = dogs[myDog];
console.log(myBreed);
```

The string `Doberman` would be displayed in the console.

Another way you can use this concept is when the property's name is collected dynamically during the program execution, as follows:

```js
const someObj = {
  propName: "John"
};

function propPrefix(str) {
  const s = "prop";
  return s + str;
}

const someProp = propPrefix("Name");
console.log(someObj[someProp]);
```

`someProp` would have a value of the string `propName`, and the string `John` would be displayed in the console.

Note that we do *not* use quotes around the variable name when using it to access the property because we are using the *value* of the variable, not the *name*.

##  instructions 

Set the `playerNumber` variable to `16`. Then, use the variable to look up the player's name and assign it to `player`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative accessing-object-properties-with-variables.js %}

{% endhighlight %}

</div>
</div>

