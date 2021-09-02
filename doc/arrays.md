# Arrays

Container of unnamed objects of a single type that we access by position. Unlike a vector, arrays have fixed size; we cannot add elements to an array. They sometimes offer better run-time performance for specialized applications.

## Defining and initializing

```cpp
int a1[sz] = {0,1,2};
int a2[] = {0,1,2};
int a3[5] = {0,1,2};    // equivalent to a3[] = {0,1,2,0,0}
```

### Character arrays are special

Character arrays can be initialized from a string literal. When we use this form of initialization, it is important to remember that string literals end with a null character. That null char is copied into the array along with the characters in the literal

```cpp
char a1[] = {'C','+','+'};          // list initialization, no null
char a2[] = {'C','+','+','\0'};     // list initialization, explicit null
char a3[] = "C++";                  // null terminator added automatically
const char a4[6] = "Daniel";        // error: no space for the null!
```

The dimension of a1 is 3; the dimensions of a2 and a3 are both 4