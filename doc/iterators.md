# Iterators

More general mechanism instead of use subscripts 

Unlike pointers, we do not use the address-of operator to obtain an iterator. Instead, types that have iterators have members that return iterators. These types have members named 'begin' and 'end'.

'begin' returns an iterator that denotes the first element, if there is one

### Iterator operations

```cpp
*iter           // returns a reference to the element denoted by the iter
iter->mem       // dereferences iter and fetches the member named mem from the underlying element. Equivalent to (*iter).mem
++iter          // increments iter to refer next element
--iter
iter1 == iter2  // compares 2 iterators for equality. 2 iterators are equal if they denote the same element 
```

```cpp
vector<int>::iterator it;           // it can read and write vector<int> elements
string::iterator it2;               // it2 can read and write chars in a string
vector<int>::const_iterator it3;    // it3 can read but not write elements
string::const_iterator it4;         // it4 can read but not write characters
```

A const_iterator behaves like a const pointer. May read but not write the element it denotes; an object of type iterator can both read and write. 

### the -> operator

```cpp
(*it).empty()           // dereferences it and calls the member empty on the resulting object
*it.empty()             // error
```

The arrow operator combines deference and member access into a single operation
> it->mem is equivalent to (*it).mem

#### Some vector operations invalidate iterators
Any operation, such as push_back, that changes the size of a vector potentially invalidates all iterators into that vector

For now, it is important to realize that loops that use iterators should not add elements to the container to which the iterators refer