# Funciones

## Parametros y argumentos

Argumentos son los inicializadores para los parametros de una funcion. 

```cpp
int suma (int a, int b);
                     ^ parametro
              ^ parametro

suma(3,5);
       ^ argumento
     ^ argumento
```

## Objetos locales
En C++ los nombre tienen un ámbito, y los objetos un tiempo de vida
* El ambito de un nombre es la parte del programa en el que ese nombre es visible
* El tiempo de vida de un objeto es el tiempo durante la ejecucion del programa en que el programa existe

Los parametros y variables definidas dentro del cuerpo de una funcion se llaman variables locales. Son 'locales' 
a esa funcion y 'ocultan' las declaraciones del mismo nombre en un ambito exterior

## Paso de argumentos

### Paso de argumentos por referencia
A reference parameter is bound directly to the object from which it is initialized. When we 'reset_cpp', 'i' will be bound to whatever int object we pass. Changes made to 'i' are made to the object to which 'i' refers

### Usar referencias para evitar copias
Para objetos grandes o contenedores con muchos datos puede ser ineficiente copiar los objetos. Ademas para algunos tipos de clases no se pueden copiar. Las funciones deben usar parametros por referencia para operar con objetos que no pueden ser copiados

## Array parameters
Los arrays tienen dos propiedades especiales: no pueden copiarse y cuando se usa un array suele convertirse a un puntero. 
Como no podemos copiarlo, no lo podemos pasar por valor, y como son convertidos a punteros, cuando lo pasamos a una funcion, estamos pasando de hecho un puntero al primer elemnto del array

Las siguientes declaraciones son equivalentes
```cpp
void print(const int*);
void print(const int[]);
void print(const int[10]);
```

```cpp
int i = 0, j[2] = {0,1};
print(&i)                  // ok, &i is int*
print(j)                   // ok: j is converted to an int* that points to j[0]
```

Otra manera de pasar array como argumentos es pasar punteros que apunten al primer y ultimo elemento del array.

