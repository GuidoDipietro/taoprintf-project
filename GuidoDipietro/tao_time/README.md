# Explain

Again, the `main()` redefinition hack that [GuyClicking](https://github.com/GuyClicking/) taught me, combined with my own obfuscation techniques, and semicolon abuse (unseen so far!)

Some clues to get this are:

```c
char str[] = "ben";
putchar(2[str]);

//ASCII table

//your mind will do the rest, I'm positive
```
