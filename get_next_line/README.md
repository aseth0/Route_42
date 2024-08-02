# Get_next_line
This is one of the firsts projects of this Route, and it will be one of your bests friends in a lot of future projects.

# Summary 📝
This library create a so useful function to get *one line* of whatever *File descriptor*.
The lines will be back to you every execution of the function, keeping the readed lines in a *specific buffer*

# Run

with the *Basic* mode, you only can read one specific *File descriptor*:
*Note:* the allocated buffer by defaul is `42` but you can change it.

Include it in to your projects.
```bash
#include "get_next_line.h"
```

```bash
gcc get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=<size>
```

The *Bonus* part give to you the management of multiples *File descriptors*:
```bash
gcc get_next_line_bonus.c get_next_line_utils_bonus.c -D BUFFER_SIZE=<size>
```

# What I've learned
- Memmory management
- Controls of memmory (leaks, buffers, duplications of string and reserved sizes).
- Generate a Makefile using arguments to the _compilers_.

# References
- [get_next_line explained : develop a function that reads a file line by line - YouTube](https://www.youtube.com/watch?v=8E9siq7apUU)
- 🇪🇸 [gemartin99/Get_next_line: This projects is about creating a function that, allows to read a line ending with a newline character ('\n') from a file descriptor. This function should work whit any buffersize.](https://github.com/gemartin99/Get_next_line)

