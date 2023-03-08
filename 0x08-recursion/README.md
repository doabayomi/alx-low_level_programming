## Description
This is the first project exploring the concept of recursion in C.
>
To make the project relatively harder the use of static variables were eliminated but due to the nature of the projects requested, one needed variables that would remain fixed during the recursive process. In order to bypass that restraint, we employed the use of global variables in the functions file.

## Global Variable Names
* `len` normally signifies the length of a string;
* `tmp` used to hold a variable's value. It has multiple variations like `tmp_i` which performed similar operation. It is used as an index sometimes.
* `count` used as a counter variable.

## Personal Notes
* **ALWAYS** reset your global variables to their initial state when it has accomplished its conditions for success (_or failure as the case may be_).
* Account for a base condition and start off from there.
