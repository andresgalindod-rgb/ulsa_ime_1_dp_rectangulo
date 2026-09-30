
#include <iostream>

#include "utilerias.h"

int main() {
    double ancho = 0.0;
    double alto = 0.0;
    double area = 0.0;
    double perimetro = 0.0;

    std::cout << "Bienvenido a mi programa de rectangulo\n";

    do {
        ancho = leerDecimal("Ancho en cm (mayor que 0): ");
        if (ancho <= 0) {
            std::cout << "El ancho debe ser mayor que 0\n";
        }
    } while (ancho <= 0);

    do {
        alto = leerDecimal("Alto en cm (mayor que 0): ");
        if (alto <= 0) {
            std::cout << "El alto debe ser mayor que 0\n";
        }
    } while (alto <= 0);

    area = ancho * alto;
    perimetro = 2 * (ancho + alto);

    std::cout << "Area: " << area << " cm2\n";
    std::cout << "Perimetro: " << perimetro << " cm\n";

    return 0;
}