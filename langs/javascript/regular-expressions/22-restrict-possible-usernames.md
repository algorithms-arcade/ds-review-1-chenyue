---
layout: home
title: 22. Restrict Possible Usernames
challengeType: 1
forumTopicId: 301363
dashedName: restrict-possible-usernames
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Regular Expressions](./README.md)

[Before](./21-match-all-non-numbers.md)  | [Next](./23-match-whitespace.md) 

Usernames are used everywhere on the internet. They are what give users a unique identity on their favorite sites.

You need to check all the usernames in a database. Here are some simple rules that users have to follow when creating their username.

1) Usernames can only use alpha-numeric characters.

2) The only numbers in the username have to be at the end. There can be zero or more of them at the end. Username cannot start with the number.

3) Username letters can be lowercase and uppercase.

4) Usernames have to be at least two characters long. A two-character username can only use alphabet letters as characters.

## Instructions 

Change the regex `userCheck` to fit the constraints listed above.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 22-restrict-possible-usernames.js %}

{% endhighlight %}

</div>
</div>