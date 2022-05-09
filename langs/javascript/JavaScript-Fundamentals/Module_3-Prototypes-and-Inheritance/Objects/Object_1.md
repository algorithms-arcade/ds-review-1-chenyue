---
layout: home
title: Prototypes and Inheritance - Objective 1 
#permalink: index.html # in case of we remove the index.md file, this doc will be the index page
---

<div class="row">
<div class="columnStmt" markdown="1">

<p align="center" ><a href="https://bloomtech-1.wistia.com/medias/234li2itp3" >
<img src="../Objects/img/Video_clip.png" width="400" height="225" style="width: 400px; height: 225px;"></a></p> 

##  The 'this' keyword   

[Home - JavaScript Fundamentals](../README.md) 

[Home - JavaScript Fundamentals](../README.md)  | [Next](./Object_2.md)

Think about the 'this' keyword as it pertains to it's uses in the English language. Let's imagine for a second that your friend has invited you over to his/her house for dinner, and abruptly mentions: "I don't like this." What are you going to do as a host? Well, you might look at your friend to discover that he/she is pointing at something; you might look around the room and find that your cat is scratching at your friend's leg. The idea here is that it is impossible to know what your friend doesn't like without some context.

This example is the same as the 'this' keyword. It is impossible to know what 'this' points to, without some execution context, or knowledge of where a function is being called.

The first place to start with the `this` keyword is to understand where a function is called. If you know the function's context, you may be able to deduce what the 'this' keyword is pointing to.

There are four rules to this discovery. They all concern an object's bounds. Remember, JavaScript has global objects (or execution context) that exist wherever JavaScript lives. In the browser, this is called `window`, and in node it's called `global/console`. Either way, JavaScript lives inside of a context. Go ahead and try this out in your Chrome web browser.

Open up your console and type in `window` and see what you get. The giant object that prints is JavaScript. Chrome has an engine built-in that can run that object and execute features of the JavaScript internally.

### Principle 1: Window/Global Object Binding

- When in the global scope, the value of "this" will be the window/console Object;

```
function sayName(name) {
  console.log(this);
  return name;
}
sayName("D'Artagnan");
```

### Principle 2: Implicit Binding

- Whenever a preceding dot calls a function, the object before the dot is this.

```
const myObj = {
  greeting: 'Hello',
  sayHello: function(name) {
    console.log(`${this.greeting} my name is ${name}`);
    console.log(this);
  }
};
myObj.sayHello('Ryan');
```
This principle is one of the most commonly used applications of the `this` keyword. Here is another example for use to play with.

```
const sayNameFunc = obj => {
  obj.sayName = function() {
    console.log(`Hello my name is ${this.name}`);
    console.log(this);
  };
};
const me = { name: 'Ryan' };
const you = { name: 'Freddy' };
sayNameFunc(me);
sayNameFunc(you);

// Invoke Methods on our objects
me.sayName();
you.sayName();

```

In this previous example, You see that we have a function that receives an object as an argument. Depending on the object being passed in, we get a different context for `this`, so when we log out the `this` keyword, we get a different object each time it's run.

### Principle 3: New binding

- Whenever we use a constructor function, `this` refers to the specific instance of the object that is created and returned by the constructor function.

This principle is a doozy because we have to learn about `constructor functions` here. Don't worry if a lot of this stuff goes over your head, be a sponge right now. Absorb as much of this as you can, and we cover `constructors` in-depth tomorrow.

Simply put, A constructor function is a function that returns an object. It's an object creator. We use them a lot in JavaScript, and they lend themselves to a paradigm called object-oriented programming. The function `CordialPerson` will create an object for us. When we call the function, we have to use the `new` keyword.

```
function CordialPerson(greeter) {
  this.greeting = 'Hello ';
  this.greeter = greeter;
  this.speak = function() {
    console.log(this.greeting + this.greeter);
    console.log(this);
  };
}

const jerry = new CordialPerson('Newman');
const newman = new CordialPerson('Jerry');

jerry.speak();
newman.speak();
```

### Principle 4: Explicit binding

Whenever we use JavaScript's call or apply method, `this` is explicitly defined.

We can override how we set `CordialPerson` constructor objects by taking the object-oriented approach. We do so by calling them explicitly with new functions, `.call` and `.apply`

```
jerry.speak.call(newman);
newman.speak.apply(jerry);
```

## Follow Along

Let's build out a couple of `constructor` `classes` to show you how `this` can be applied in the `classical` sense.

## Challenge

Complete this simple repl.it assignment:

- [https://repl.it/@dfrehner1/Practice-Explicit-binding](https://repl.it/@dfrehner1/Practice-Explicit-binding)



</div>
</div>