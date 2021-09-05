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

### Pointer to array
```cpp
constexpr unsigned sz = 5;
int arr[]{0,1,2,3,4};

int (*ptrArr)[sz] = &arr;

for (auto i : *ptrArr) {
    cout << "ptr[]: " << (i) << endl;
}

```

```cpp
string nums[] = {"one", "two", "three"};

string * p1 = &nums[0];
string * p2 = nums;      //both are equivalent

cout << *p1 << " " << *p2 << endl;

string (*pString)[3] = &nums;   
for (auto i : *pString)
    cout << "pString: " << i << endl; 
```

## C strings

std::string::c_string() returns a C-style character string. That is, it returns a pointer to the beginning of a null-terminated char array that holds the same data as the characters in the string.
The type of the pointer is 
> const char*

## Using an array to initialize a vector

We cannot initialize a built-in array from another array. Nor can we initialize an array form a vector. However, we can use an array to initialize a vector

```cpp
int int_arr[] = {0,1,2,3,4,5};
vector<int> ivec(begin(int_arr), end(int_arr));
```
The specified range can be a subset of the array
```cpp
vector<int> subVec(int_arr + 1, int_arr + 4);
```

### Advice: Use library types instead of arrays

## Multidimensional arrays

```cpp
for (const auto &row : ia)
    for (auto col : row)
        cout << col << endl;
```
If row is not a reference the program will not compile. The first for iterates through 'ia', whose elements are arrays of
size 4. Because row is not a reference, when the compiler initializes row it will convert each array element to a pointer to that 
array's first element. As a result, in this loop the type of row is int*. 

> To use a multidimensional array in a range for, the loop control variable for all but the innermost array must be references


