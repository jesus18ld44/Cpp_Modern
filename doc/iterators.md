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