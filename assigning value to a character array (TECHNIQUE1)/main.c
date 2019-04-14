I am a little surprised by the following.

Example 1:

char s[100] = "abcd"; // declare and initialize - WORKS
Example 2:

char s[100]; // declare
s = "hello"; // initalize - DOESN'T WORK ('lvalue required' error)

I'm wondering why the second approach doesn't work.
It seems natural that it should (it works with other data types)?
Could someone explain me the logic behind this?

When initializing an array, C allows you to fill it with values. so

char s[100] = "abcd";
is basically the same as

int s[3] = { 1, 2, 3 };
but it doesn't allow you to do the assignmend since s is an array and not a free pointer. the meaning of

s = "abcd"
is to assign the pointer value of "abcd" to 's'
but you can't change s since then nothing will point to the array.
This can and does work if s is a char* - a pointer that can point to anything.

if you want to copy the string simple use strcpy

The correct way would be:

char s[100];
strncpy(s, "hello", 100);