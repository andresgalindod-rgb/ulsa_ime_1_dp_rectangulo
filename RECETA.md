# Receta: Área y perímetro de un rectángulo

1. MOSTRAR "Bienvenido a mi programa de rectangulo"
2. ancho ← 0
3. alto ← 0
4. area ← 0
5. perimetro ← 0
6. REPETIR
7.     ancho ← leerDecimal("Ancho en cm (mayor que 0): ")
8.     SI ancho <= 0 ENTONCES
9.         MOSTRAR "El ancho debe ser mayor que 0"
10.    FIN SI
11. HASTA QUE ancho > 0
12. REPETIR
13.     alto ← leerDecimal("Alto en cm (mayor que 0): ")
14.     SI alto <= 0 ENTONCES
15.         MOSTRAR "El alto debe ser mayor que 0"
16.     FIN SI
17. HASTA QUE alto > 0
18. area ← ancho * alto
19. perimetro ← 2 * (ancho + alto)
20. MOSTRAR "Area: ", area, " cm2"
21. MOSTRAR "Perimetro: ", perimetro, " cm"
22. FIN