import cmath
#Ejercicio 3 función cuadratica
#David necesita usar la formula cuadratica
#El mismo identifica a, b, y c
#utilizo la funcion cuadratica pero por partes
#luego las une
#El recibe el resultado

print("Dime tus valores a, b, c")
# Entrada
a = float(input("Valor de a: "))
b = float(input("Valor de b: "))
c = float(input("Valor de c: "))

# Cálculo de las raíces
parte1 = -b
parte2 = b**2
parte3 = -4 * a * c
parte4 = 2 * a

# Discriminante
discriminante = parte2 + parte3

# Cálculo de las raíces
proceso1 = cmath.sqrt(discriminante)
resultado1 = (parte1 - proceso1) / parte4
resultado2 = (parte1 + proceso1) / parte4

# Salida
total1 = round(resultado1.real, 2)  # Solo la parte real
total2 = round(resultado2.real, 2)  # Solo la parte real
print(f"Tienes dos resultados: {total1} y {total2}")
