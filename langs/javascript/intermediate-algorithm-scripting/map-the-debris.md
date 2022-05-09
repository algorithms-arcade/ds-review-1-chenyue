---
layout: home
title: Map the Debris
challengeType: 5
forumTopicId: 16021
dashedName: map-the-debris
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Intermediate Algorithm Scripting](../intermediate-algorithm-scripting/README.html) 

[Before](./make-a-person.md)  | [Intermediate Algorithm Scripting](../intermediate-algorithm-scripting/README.html) 

Return a new array that transforms the elements' average altitude into their orbital periods (in seconds).

The array will contain objects in the format `{name: 'name', avgAlt: avgAlt}`.

You can read about orbital periods [on Wikipedia](http://en.wikipedia.org/wiki/Orbital_period).

The values should be rounded to the nearest whole number. The body being orbited is Earth.

The radius of the earth is 6367.4447 kilometers, and the GM value of earth is 398600.4418 km<sup>3</sup>s<sup>-2</sup>.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative map-the-debris.js %}

{% endhighlight %}

</div>
</div>

