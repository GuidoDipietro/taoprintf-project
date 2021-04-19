# Wait, what?

I know.

Just a double pointer pointing to a list of one double number.  
A regular `printf` call, printing using double (`%lf`) formatting.  
Yet, the outcome is shocking.

You can guess the magic is happening on the `taofloat.h` file. And it is. :trollface:

Make sure to check it out, it's quite ridiculous.
A little clue is that an array of chars... is just a few bits put together... which might as well be a float?  
(Check IEEE double precision convention).

Credits to [GuyClicking](https://github.com/GuyClicking) for teaching me that `main` hack.

Something I really like about this one is that it compiles with absolutely ZERO warnings. Therefore it's all good practices, right?
