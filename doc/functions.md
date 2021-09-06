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


