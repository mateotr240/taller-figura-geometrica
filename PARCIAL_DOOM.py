# Sistema de Escudo del Doom Slayer/Parcial 2025-1

def procesar_ataque(escudo, daño, tipo_ataque):
    daño_final = daño
    efectos = []
    
    # Regla especial 1: Sobrecarga con plasma
    if escudo > 70 and tipo_ataque == 1:
        daño_final = daño * 1.5  # Aumento el daño un 50%
        efectos.append("¡Sobrecarga de escudo! Daño aumentado.")
    
    # Regla especial 2: Protección contra fuego infernal
    elif escudo < 30 and tipo_ataque == 2:
        daño_final = daño * 0.6  # Reduzco el daño un 40%
        efectos.append("¡Protección infernal activada! Daño reducido.")
    
    # Calculo el escudo que queda
    escudo_restante = escudo - daño_final
    
    # Si el escudo queda negativo, lo pongo en cero
    if escudo_restante < 0:
        escudo_restante = 0
    
    # Regla especial 3: Modo de ira cuando el escudo llega a 0
    if escudo_restante == 0 and escudo > 0:
        efectos.append("¡Modo de ira activado! El siguiente ataque será más fuerte.")
    
    return daño_final, escudo_restante, efectos


def main():
    print("Sistema de Escudo del Doom Slayer")
    print("Ingresa: escudo daño tipo_ataque")
    print("Presiona Enter sin escribir nada para salir")
    
    while True:
        entrada = input("> ")
        
        if entrada == "":
            break
        
        partes = entrada.split()
        
        if len(partes) != 3:
            print("Error: Necesito 3 números")
            continue
        
        try:
            escudo = int(partes[0])
            daño = int(partes[1])
            tipo_ataque = int(partes[2])
            
            daño_final, escudo_restante, efectos = procesar_ataque(escudo, daño, tipo_ataque)
            
            print("Daño recibido:", daño_final)
            print("Escudo restante:", escudo_restante)
            
            for efecto in efectos:
                print(efecto)
            
            print("-" * 30)
            
        except ValueError:
            print("Error: Solo puedo usar números")


if __name__ == "__main__":
    main()
