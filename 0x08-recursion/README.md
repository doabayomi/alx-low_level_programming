## Description
This is the first project exploring the concept of recursion in C.
>
Normally, the simplest bypass to this constraint would be global variables but Betty (_one of the things I hate the most in this program_) like the devil she is does not allow the use of global variables i.e. variables outside functions.
>
Thankfully, I got the Eureka moment fast enough. There are two types of recursion, if you don't see your way with the first type think along the second type. Good luck to anyone trying this shit again.

## Global Variable Names
* `len` normally signifies the length of a string;
* `tmp` used to hold a variable's value. It has multiple variations like `tmp_i` which performed similar operation. It is used as an index sometimes.
* `count` used as a counter variable.

## Personal Notes
* **ALWAYS** reset your global variables to their initial state when it has accomplished its conditions for success (_or failure as the case may be_).
* Account for a base condition and start off from there.
