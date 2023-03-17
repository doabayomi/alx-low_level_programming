## Description
This is basically more projects on the the malloc() and free() functions in C pertaining to dynamic memory allcoation in C.

## Personal Notes
* `malloc` is a very balanced function with no exploits :smiling\_imp:. Just kidding! :smile:. Just make sure to cross check your counts to account for things like NULL terminating byte, min and max numbers e.t.c.
* Confirm what the buffer should be and not just the memory addresses. If it is an int buffer, check the function with `print_buffer` modified to print int
