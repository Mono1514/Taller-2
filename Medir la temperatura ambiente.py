#Ejercicio2 Medir la temperatura ambiente 
#David mira el termometro de la casa
#David quiere saber en cuanto esta el clima en grados Fahrenheit
#David recibe la temperatura en grados fahrenheit

Entrada = "Converición de grados C° a F°, coloca los grados C°:"
print (Entrada)
#esta es la entrada
gradosC = int(input())  
converción =  ((gradosC  * 9)/5) + 32
#esta es la salida
print (f"La temperatura es de {converción} grados F°")
