# Práctica 3: Área y perímetro de un rectángulo
## 1. Descripción del problema (Fase 1)
Pide el ancho y el alto de un rectangulo en centimetros y revisa que sean mayores que 0 y muestra su area y perimetro.

_____

## 2. Entradas y salidas (Fase 1)


**Entradas:**
1. ancho en cm. La medida horizontal del rectángulo; debe ser mayor que 0.
2. alto en cm. La medida vertical; debe ser mayor que 0.

**Salidas:**
1. area tipo double, en cm². La superficie que ocupa el rectángulo.
2. perimetro tipo double, en cm. La longitud de todo su borde.

**Fórmulas** (área y perímetro):
Área = ancho × alto. Perímetro = 2 × (ancho + alto), porque el borde tiene dos anchos y dos altos.

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- El ancho debe ser mayor que 0.
- El alto debe ser mayor que 0.

**¿Qué hace mi programa con una medida de 0 o negativa? ¿Por qué?**
La rechaza y vuelve a pedir el dato, porque un rectángulo no puede medir 0 ni una medida negativa

**¿Quién detecta cada error?** (¿qué revisa `leerDecimal` y qué reviso yo?)
`leerDecimal` revisa el formato: y que lo escrito sea un número (rechaza cosas como "abc" o "12abc")

**Invariante** (al salir del ciclo que pide el ancho, ¿qué es seguro sobre `ancho`?):
siempre se cumple que ancho > 0

## 4. Casos resueltos a mano (Fase 1)

| Caso | Ancho | Alto | Área calculada a mano | Perímetro calculado a mano |
|---|---|---|---|---|
| 1 | 7 | 2 | 14 cm² | 18 cm |
| 2 (cuadrado) | 3 | 3 | 9 cm² | 12 cm |
| 3 (con decimales) | 1.5 | 4 | 6 cm² | 11 cm |

## 5. Receta en pseudocódigo (Fase 2)


**¿Probé mi receta a mano con un caso válido y uno inválido?** Sí 
**¿Tuve que corregirla?** Si
**¿Cuántas versiones de mi receta escribí hasta la final?** 2

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o rectangulo
./rectangulo
```

## 7. Ejemplo de ejecución (Fase 3)
Bienvenido a mi programa de rectangulo
Ancho en cm (mayor que 0): 5
Alto en cm (mayor que 0): 3
Area: 15 cm2
Perimetro: 16 cm

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué resultado dio `2 * ancho + alto` con 5 × 3? ¿Por qué?**
Dio 13 en lugar de 16. C++ hace primero la multiplicación (2 * 5 = 10) y después la suma (10 + 3 = 13), igual que en matemáticas.

**Experimento B: sin validación, ¿qué mostró el programa con ancho -4 y alto 3? ¿Tiene sentido?**
Mostró Area: -12 cm2 y Perimetro: -2 cm. No tiene sentido físico ya que un rectángulo no puede tener área ni perímetro negativos.

**Experimento C (opcional): con `int`, ¿qué pasó con 2.5 y con 100000 × 100000?**
no lo realice

## 9. Tabla de pruebas (Fase 4)

| Caso | Ancho | Alto | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|---|
| Normal | 5 | 3 | Área 15, perímetro 16 | Área 15, perímetro 16 | Sí |
| Cuadrado | 4 | 4 | Área 16, perímetro 16 | Área 16, perímetro 16 | Sí |
| Decimales | 2.5 | 4 | Área 10, perímetro 13 | Área 10, perímetro 13 | Sí |
| Muy pequeño | 0.1 | 0.1 | Área 0.01, perímetro 0.4 | Área 0.01, perímetro 0.4 | Sí |
| Ancho cero | 0 (luego 5) | 3 | vuelve a pedir el ancho | Mostró "El ancho debe ser mayor que 0" y lo volvió a pedir | Sí |
| Alto negativo | 5 | -2 (luego 3) | vuelve a pedir el alto | Mostró "El alto debe ser mayor que 0" y lo volvió a pedir | Sí |
| Texto | `abc` (luego 5) | 3 | `leerDecimal` vuelve a pedir | `leerDecimal` rechazó el texto y volvió a pedir | Sí |
| Caso propio 1 | 7 | 2 | Área 14, perímetro 18 | Área 14, perímetro 18 | Sí |
| Caso propio 2 | -1, 0 (luego 3) | 3 | vuelve a pedir el ancho dos veces; área 9, perímetro 12 | Lo pidió dos veces más; área 9, perímetro 12 | Sí |

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | El perímetro daba 13 en lugar de 16 con 5 × 3 | Agregué paréntesis: `2 * (ancho + alto)` | Sí |
| 2 | Con ancho -4 daba área y perímetro negativos sin avisar | Agregué un ciclo `do-while` para validar el ancho y el alto | Sí |
| 3 | El usuario no sabía por qué se rechazaba su medida | Agregué el mensaje "El ancho debe ser mayor que 0" (y lo mismo para el alto) | Sí |
**Reto elegido (opcional):** _____

## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| _____ | _____ |

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
aprendí que C++ multiplica antes de sumar, que un programa puede dar un resultado incorrecto sin marcar error, y a validar datos con un ciclo do-while.

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
Guardaría y compilaría después de cada cambio pequeño, y haría commits más seguido.

**¿Qué fue lo más difícil y cómo lo resolví?**
Lo más difícil fue lograr que el programa volviera a pedir el dato cuando era 0 o negativo

**¿Qué pregunta me quedó sin responder?**
ninguna

**Diseñar la receta desde cero, ¿fue más fácil o más difícil de lo que esperaba? ¿Qué haría distinto la próxima vez?**
mas dificil, lo empezaria con mas tiempo de anticipacion

## 13. Lista de verificación antes de entregar (Fase 5)

- [si ] Llené todas las secciones (no quedan `_____`)
- [ si] Escribí mi receta completa en `RECETA.md` antes de programar
- [si ] Mi programa compila sin advertencias
- [ si] Probé todos los casos de la tabla
- [ si] Hice los Experimentos A y B y dejé el código correcto al terminar
- [ ] No modifiqué `utilerias.h`
- [ si] Hice al menos 3 commits con mensajes claros
- [ si] Hice `git push` y verifiqué mi fork en GitHub
- [si ] Entregué el enlace de mi fork en Classroom