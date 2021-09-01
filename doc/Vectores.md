# Libreria Vector

Colección de objetos, todos ellos del mismo tipo. Todos los objetos en la colleción tienen un índice asociado, que proporciona el accesoo al objeto. A menudo referido como un 'contanier' porque 'contiene objetos'

```cpp
#include <vector>
using std::vector;
```

vector es una plantilla de clase. 

### Ways to initialize a vector

```cpp
vector<T> v1            // vector that holds objects of type T. Default initialization; v1 is empty

vector <T> v2(v1)       // v2 has a copy of each element in v1
vector <T> v2 = v1      // Equivalent

vector<T> v3(n,val)     // v3 has n elements with value val
vector<T> v4(n)         // v4 has n copies of a value-initialized object

vector<T> v5{a,b,c...}  // v5 has as many elements as there are initializers; elements are initialized by corresponding initializers
vector<T> v5 = {a,b,c..} // Equivalent
```

### Adding elements to a vector
The solution is a vector member: push_back()

It is often unnecesary to define a vector of a specefic size, because the vectors can efficiently add elements at run time

> We cannot use a range for if the body of the loop adds elemtens to the vector

### vector operations
```cpp
v.ecmpty()
v.size()                // returns a value of the size_type defined by the corresponding vector type
v.push_back(t)
v[n]
v1 = v2                 // replaces the elements in v1 with a copy of the elements in v2
v1 = {a, b, c, ...}     // replaces the elements in v1 with a copy of the elements in the comma separated list
v1 == v2                
v1 != v2
<,<=,>,>=
```

To use size_type, we must name the type in which it is defined. A vector type always includes its element type
```cpp
vector<int>::size_type      // ok
vector::size_type           // error





