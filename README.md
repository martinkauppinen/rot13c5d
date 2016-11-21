# rot13c5d
C program that applies the ROT13 cipher to any ascii string that is passed to it containing letters between A-z. If there are digits in the string, a ROT5 cipher will be applied to them.
Any other characters will remain unchanged.

Example usage:
```
$ ./rot13c5d Hello world!
Uryyb jbeyq!

$ ./rot13c5d 1234567890
6789012345

$ ./rot13c5d abc123
nop678
```
