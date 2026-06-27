# Pairs - HackerRank (Search)

## Descripción

Solución del ejercicio **Pairs** de HackerRank, perteneciente a la categoría **Search**.

El objetivo del algoritmo es encontrar la cantidad de pares de números enteros dentro de un arreglo cuya diferencia sea igual a un valor **k**.

Para optimizar la búsqueda de elementos, se utiliza la estructura de datos **Set**, permitiendo reducir la complejidad temporal de **O(n²)** a **O(n)**.

---

## Requisitos

- Python 3.10 o superior
- Visual Studio Code (opcional)
- Terminal o consola de comandos

---

## Instalación

1. Clonar el repositorio

```bash
git clone https://github.com/JhoimarSilva/Ejercicios_Parcial_ADA_I.git
```

2. Ingresar a la carpeta del proyecto

```bash
cd Ejercicios_Parcial_ADA_I\pairs
```

---

## Ejecución

Ejecutar el programa con el siguiente comando:

```bash
python main.py
```

---

## Caso de prueba

Actualmente el programa contiene el siguiente ejemplo:

```python
k = 5

arr = [20, 3, 15, 8, 25, 10, 30, 5, 35, 40, 13, 18]
```

Salida esperada:

```text
La cantidad de pares es: 10

Los pares encontrados son:

(20, 25)
(3, 8)
(15, 20)
(8, 13)
(25, 30)
(10, 15)
(30, 35)
(5, 10)
(35, 40)
(13, 18)
```

---

## Complejidad computacional

### Complejidad temporal

- Crear el Set: **O(n)**
- Recorrer el arreglo: **O(n)**
- Buscar un elemento en el Set: **O(1)** (promedio)

Complejidad total:

```
O(n)
```