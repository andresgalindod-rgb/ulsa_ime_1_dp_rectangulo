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
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las preguntas. -->

**¿Probé mi receta a mano con un caso válido y uno inválido?** Sí / No
**¿Tuve que corregirla?** _____
**¿Cuántas versiones de mi receta escribí hasta la final?** _____

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o rectangulo
./rectangulo
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso normal. -->

```
_____
```

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué resultado dio `2 * ancho + alto` con 5 × 3? ¿Por qué?**
_____

**Experimento B: sin validación, ¿qué mostró el programa con ancho -4 y alto 3? ¿Tiene sentido?**
_____

**Experimento C (opcional): con `int`, ¿qué pasó con 2.5 y con 100000 × 100000?**
_____

## 9. Tabla de pruebas (Fase 4)

| Caso | Ancho | Alto | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|---|
| Normal | 5 | 3 | Área 15, perímetro 16 | _____ | _____ |
| Cuadrado | 4 | 4 | Área 16, perímetro 16 | _____ | _____ |
| Decimales | 2.5 | 4 | Área 10, perímetro 13 | _____ | _____ |
| Muy pequeño | 0.1 | 0.1 | Área 0.01, perímetro 0.4 | _____ | _____ |
| Ancho cero | 0 | 3 | vuelve a pedir el ancho | _____ | _____ |
| Alto negativo | 5 | -2 | vuelve a pedir el alto | _____ | _____ |
| Texto | `abc` | 3 | `leerDecimal` vuelve a pedir | _____ | _____ |
| Caso propio 1 | _____ | _____ | _____ | _____ | _____ |
| Caso propio 2 | _____ | _____ | _____ | _____ | _____ |

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | _____ | _____ | _____ |
| 2 | _____ | _____ | _____ |

**Reto elegido (opcional):** _____

## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| _____ | _____ |

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
_____

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
_____

**¿Qué fue lo más difícil y cómo lo resolví?**
_____

**¿Qué pregunta me quedó sin responder?**
_____

**Diseñar la receta desde cero, ¿fue más fácil o más difícil de lo que esperaba? ¿Qué haría distinto la próxima vez?**
_____

## 13. Lista de verificación antes de entregar (Fase 5)

- [ ] Llené todas las secciones (no quedan `_____`)
- [ ] Escribí mi receta completa en `RECETA.md` antes de programar
- [ ] Mi programa compila sin advertencias
- [ ] Probé todos los casos de la tabla
- [ ] Hice los Experimentos A y B y dejé el código correcto al terminar
- [ ] No modifiqué `utilerias.h`
- [ ] Hice al menos 3 commits con mensajes claros
- [ ] Hice `git push` y verifiqué mi fork en GitHub
- [ ] Entregué el enlace de mi fork en Classroom