vertices = []  
print("Vamos a leer los vértices. Ingresa 'fin' cuando termines.")

while True:
    entrada_x = input("Ingresa la coordenada X (o 'fin'): ")
    if entrada_x.lower() == 'fin':
        break

    try:
        x = float(entrada_x)
        y = float(input("Ingresa la coordenada Y: "))
        z = float(input("Ingresa la coordenada Z: "))
        vertices.append((x, y, z))  

    except ValueError:
        print("¡Error! Debes ingresar números para las coordenadas.")


caras = []  
print("Ahora vamos a leer las caras. Ingresa 0 cuando termines.")

while True:

    try:
        num_vertices_cara = int(input("¿Cuántos vértices tiene esta cara? (0 para terminar): "))
        if num_vertices_cara == 0:
            break

        cara_actual = []
        for i in range(num_vertices_cara):

            indice_vertice = int(input(f"Ingresa el índice del vértice {i + 1} (empieza en 0): "))

            if 0 <= indice_vertice < len(vertices):
                cara_actual.append(indice_vertice)
            else:
                print("¡Error! Ese vértice no existe. Intenta de nuevo.")
                cara_actual = [] 
                break 


            caras.append(cara_actual)

    except ValueError:
        print("¡Error! Debes ingresar un número entero.")

estructura_total = {"vertices": vertices, "caras": caras}

print("¡Listo! Aquí está la estructura completa:")
print(estructura_total)
