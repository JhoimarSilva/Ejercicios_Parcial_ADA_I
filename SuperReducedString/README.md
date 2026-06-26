# Super Reduced String

## Autor

- Nombre: Jhoimar Silva Torres
- Curso: Análisis y Diseño de Algoritmos I (ADA I)

## Descripción

Este programa resuelve el problema **Super Reduced String** de HackerRank.

El objetivo es reducir una cadena eliminando pares de caracteres iguales y consecutivos hasta que ya no sea posible realizar más eliminaciones. Para ello, se utiliza una cadena auxiliar que funciona como una pila (stack), permitiendo agregar y eliminar caracteres de manera eficiente.

## Tecnologías utilizadas

- C++
- Visual Studio Code
- Compilador g++

## Cómo compilar

Abrir una terminal en la carpeta del proyecto y ejecutar:

```bash
g++ main.cpp -o SuperReducedString
```

## Cómo ejecutar

En Windows:

```bash
.\SuperReducedString.exe
```

## Ejemplo de entrada

```
aaabccddd
```

## Salida esperada

```
abd
```

## Explicación del algoritmo

El algoritmo recorre la cadena carácter por carácter.

- Si la cadena `resultado` está vacía o el carácter actual es diferente al último almacenado, el carácter se agrega.
- Si el carácter actual es igual al último almacenado, ambos se eliminan.
- Al finalizar el recorrido, si la cadena queda vacía se retorna **"Empty String"**; en caso contrario, se retorna la cadena reducida.

## Enlace del ejercicio

https://www.hackerrank.com/challenges/reduced-string/problem?isFullScreen=true