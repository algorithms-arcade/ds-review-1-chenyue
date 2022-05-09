---
layout: home
title: 13. Match Characters that Occur Zero or More Times
challengeType: 1
forumTopicId: 301351
dashedName: match-characters-that-occur-zero-or-more-times
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Regular Expressions](./README.md)

[Before](./12-match-characters-that-occur-one-or-more-times.md)  | [Next](./14-find-characters-with-lazy-matching.md) 

The last challenge used the plus `+` sign to look for characters that occur one or more times. There's also an option that matches characters that occur zero or more times.

The character to do this is the asterisk or star: `*`.

```js
let soccerWord = "gooooooooal!";
let gPhrase = "gut feeling";
let oPhrase = "over the moon";
let goRegex = /go*/;
soccerWord.match(goRegex);
gPhrase.match(goRegex);
oPhrase.match(goRegex);
```

In order, the three `match` calls would return the values `["goooooooo"]`, `["g"]`, and `null`.

## Instructions 

For this challenge, `chewieQuote` has been initialized as the string `Aaaaaaaaaaaaaaaarrrgh!` behind the scenes. Create a regex `chewieRegex` that uses the `*` character to match an uppercase `A` character immediately followed by zero or more lowercase `a` characters in `chewieQuote`. Your regex does not need flags or character classes, and it should not match any of the other quotes.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 13-match-characters-that-occur-zero-or-more-times.js %}

{% endhighlight %}

</div>
</div>