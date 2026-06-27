def pairs(k, arr):
    """
    Función que encuentra la cantidad de pares de enteros en una lista que tienen una diferencia específica.

    Parámetros:
    k (int): La diferencia objetivo.
    arr (list): Lista de enteros.

    Retorna:
    int: El conteo de pares con la diferencia especificada.
    """
    # Un conjunto para almacenar los elementos de la lista para una búsqueda rápida en O(1)
    arr_set = set(arr)
    count = 0

    pares = []  # Lista para almacenar los pares encontrados

    # Se recorre cada numero en el arreglo y se verifica si el complemento (num + k) existe en el conjunto
    for num in arr:
        
        number = num + k
        
        if number in arr_set:
            count += 1
            pares.append((num, number))  # Agregar el par encontrado a la lista

    return count, pares

#prueba de escritorio
k = 5
arr = [20, 3, 15, 8, 25, 10, 30, 5, 35, 40, 13, 18]
cantidad, pares = pairs(k, arr)
print("La cantidad de pares es:", cantidad)
print("Los pares encontrados son:")
# Encontrar y mostrar los pares encontrados 
for par in pares:
    print(par)