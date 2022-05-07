---
layout: home
title: Prototypes and Inheritance - Objective 2 
#permalink: index.html # in case of we remove the index.md file, this doc will be the index page
---

<div class="row">
<div class="columnStmt" markdown="1">

<p align="center" ><a href="https://bloomtech-1.wistia.com/medias/i2dbhlkg0b" >
<img src="../Objects/img/Video_clip.png" width="400" height="225" style="width: 400px; height: 225px;"></a></p>

##  Prototypes, constructor functions the new keyword, and inheritance  

[Home - JavaScript Fundamentals](../README.md) 

[Previous](./Object_1.md) | [Next](./Project.md)

All objects in JavaScript have a `prototype` property by default. This property is used as an object to attach methods and other properties that can be delegated down to other `child` functions/objects.

The constructor function is a way we can build objects.

```
function Animal(object) {
  this.name = object.name;
}
```
Take the code above into consideration. Notice that `Animal` is capitalized. This is by convention only. It has nothing to do with syntax, but this is how I tell another JS developer, "I'm writing a constructor here."

A constructor function "constructs" objects. You can think of it as a template. The function itself needs to take in an object literal of some sort so that it can map that object literal's properties to a new object that will be returned once instantiated.

Lots of big words there, but here is what that all means:

```
function Person(attributes) {
  this.age = attributes.age;
  this.name = attributes.name;
  this.homeTown = attributes.homeTown;
  this.speak = function () {
    return `Hello, my name is ${this.name}`;
  };
}
```

Now that we have created our constructor function as a template for object creation, we get the chance to use this function to create objects.

We call `Person` with the `new` keyword, and we feed it an object literal that will map to those attributes specified in the `Person` block. A note on the new keyword:

- When `new` is called, the `constructor function` can essentially create a context for a `this` object. Then what gets returned from that `constructor function` is that particular `this` object with the new properties added to it.

```
const fred = new Person({
  age: 35,
  name: 'Fred',
  homeTown: 'Bedrock'
});
```
```
console.log(fred);
console.log(fred.speak());
```

Copy and paste the Person constructor as well as the newly created fred object into google chrome's console, and you will see the following:

Look at the image above, and you will see that `speak` was inherited from the Person object! This showcases that we are using inheritance and introduces how we use prototypes in JavaScript.

### Prototype

The prototype is the mechanism by which all JavaScript objects inherit from one another. You can think of the prototype as an object that objects use to hold onto values that can be passed down to other objects. We use it all the time in inheritance.

The example above is great; however all we're doing is creating a single object with the specified attributes in the constructor. We could use this object to create multiple objects over and over, which is helpful. Where this comes in handy is when we have special instances of a parent object or child objects that need to know about particular methods, attributes, or properties.

Let's refactor the constructor function `Person` and remove the `speak` function from the object. After `speak` has been removed, we will introduce a new `speak` property on `Person` using `Person.prototype`.

```
function Person(attributes) {
  this.age = attributes.age;
  this.name = attributes.name;
  this.homeTown = attributes.homeTown;
}

Person.prototype.speak = function () {
  return `Hello, my name is ${this.name}`;
};
```

Now that we have added the `speak` function to the prototype of `Person`, it will no longer be on the object `fred`. The `Person` prototype wholly owns `speak`. `Person` is now able to pass down `speak` to each instance of `Person` without creating a new property on any new objects.

You will notice when we log the `fred` object out in the console, we see this `__proto__` thing. `__proto__` is helpful for us to see inheritance in the browser's specific JavaScript engine.

Let's look at how inheritance works with prototypes. Here we create a `Child` constructor. Notice we are using the call() method to bind `this` to `Person`.

```
function Child(childAttributes) {
  Person.call(this, childAttributes); // binding this to Person
  this.isChild = childAttributes.isChild; // this will be a special attribute to Child
}
```

The problem with `Child` is that it doesn't necessarily know about the Person prototype yet. We have to manually tell `Child` about `Person` using `Object.create()`.

```
Child.prototype = Object.create(Person.prototype);
```

We now have linked the Person prototype together with the Child prototype. Eventually, we'll get this linking for free with the `class` keyword, but seeing `Object.create()` is good because it demonstrates how the `class` keyword works under the hood.

Now that we have created a `Child` constructor, let's introduce Pebbles to the family:

```
const pebbles = new Child({
  age: 3,
  name: 'Pebbles',
  homeTown: 'Bedrock',
});
```

It's important to note that we aren't inheriting `pebbles` from `fred`. We are using the prototype's inheritance from the `Child` constructor to access our `Person' properties.

Now we can call `pebbles.speak()` and see what happens.

```
Hello, my name is Pebbles
```
We just used inheritance from the `Person` prototype to use `pebbles.speak`. Take a moment to think about that!

To further illustrate how detached `pebbles` and `fred` are, let's add a special method to the `Child` prototype, that `fred` won't have access to. Make sure this method is under the `Object.create()`, or it won't work correctly.

```
Child.prototype.checkIfChild = function() {
  if(this.isChild) {
    console.log(`My name is ${this.name} and I am a child object`);
  }
};
```

## Follow Along

Now! Let us dive deep into some object creation together. We're going to be creating a `Fruit` constructor function that can build all instances of fruit. Our constructor should have four properties to create our objects.

- type
- name
- isRipe
- calories
  
After those properties, our object should have two prototype methods added to it.

- calculateCalories - which logs the number of calories in a specified fruit * 100
- shipped - which takes in a destination and logs out the fruit's name was shipped to destination
- 
Our code should look something like this:

```
function Fruit(attrs) {
  this.type = attrs.type;
  this.name = attrs.name;
  this.isRipe = attrs.isRipe;
  this.calories = attrs.calories;
}

Fruit.prototype.shipped = function(destination) {
  console.log(`Shipping ${this.name} to ${destination}`);
};

Fruit.prototype.calculateCals = function() {
  console.log(`Calories in ${this.name} are ${this.calories * 200}`);
};
```

Now we're going to create a child constructor called `Banana`. Banana should have a special attribute on it called `doMonkeysLikeIt` this will be a boolean. We won't necessarily care if monkeys like any other fruits, so this will be just `Banana` specific.

Banana's prototype needs to be set to Fruit's prototype. Our code should look something like this:

```
function Banana(bananaAttrs) {
  Fruit.call(this, bananaAttrs);
  this.doMonkeysLikeIt = bananaAttrs.doMonkeysLikeIt;
}
```

Now to 'inherit' the prototype methods from the `Fruit's` prototype, we need to use this clunky line of code.

```
Banana.prototype = Object.create(Fruit.prototype);
```

Now we're going to want to add a method to our Banana's prototype called checkIfMonkeysLikeIt that will log out if the monkeys like bananas.

```
Banana.prototype.checkIfMonkeysLikeIt = function() {
  if(this.doMonkeysLikeIt) {
    return true;
  } else {
    return false;
  }
};
```

**NOTE**: This function will only belong to instances of `Banana` and NOT instances of `Fruit`;

Ok, now that we have our `Banana` constructor and it is leveraging the power of the `Fruit` parent. Let's create a Kiwi constructor and add a special attribute to it called `isFuzzy`.

```
function Kiwi(kiwiAttrs) {
  Fruit.call(this, kiwiAttrs);
  this.isFuzzy = kiwiwAttrs.isFuzzy;
}
```
And then add a prototype method to kiwi called `checkIfFuzzy`;

```
Kiwi.prototype.checkIfFuzzy = function() {
  if(this.isFuzzy) {
    return true;
  } else {
    return false;
  }
};
```
Finally let's create some objects from our constructor functions:

```
const newBanana = new Banana({
  doMonkeysLikeIt: true,
  type: 'Tree',
  name: 'Banana',
  isRipe: false,
  calories: 0.1
});

const newKiwi = new Kiwi({
  isFuzzy: true,
  type: 'Tree',
  name: 'Kiwi',
  isRipe: false,
  calories: 0.7
});
```

And check if things are all linked up properly.

```
newKiwi.shipped('Alaska');
newBanana.shipped('Colorado');
newBanana.checkIfMonkeysLikeIt(); // returns true
newKiwi.checkIfMonkeysLikeIt(); // won't work
newKiwi.checkIfFuzzy(); // returns true
newBanana.checkIfFuzzy(); // won't work
newBanana.calculateCals();
newKiwi.calculateCals();
```

[Link to Codepen From Video](https://codepen.io/BloomTech/pen/vQOLGO)

## Challenge

Work through this prototypes challenge by studying two constructors and filling in the missing pieces: [Prototypes Challenge](https://codepen.io/BloomTech/pen/GXdXYX).


</div>
</div>