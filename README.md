# Linux_utils
Implementation of the four popular Linux utilities (cat, cp, echo, mv, and pwd.)

I went for a minimal approach with basic error checking.
Some funtionalities are not supported (i.e. `cp src dir/` and `mv src dir/` which have the same meaning as `cp src dir/src` and `mv src dir/src`).
 Flags are not supported (i.e. `cp -r` and so on.)

All the C source files can be compiled normally using `gcc`. Make sure you have the necessary glibc packages. 

This repository is intended for learning reasons. Future updates are coming!
