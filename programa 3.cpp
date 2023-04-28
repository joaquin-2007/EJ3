#include <iostream>

// Función que devuelve el mayor de tres números
int EstMayor(int a, int b, int c) {
    int mayor = a; // Asumimos que el primer número es el mayor
    if (b > mayor) { // Si el segundo número es mayor, actualizamos la variable mayor
        mayor = b;
    }
    if (c > mayor) { // Si el tercer número es mayor, actualizamos la variable mayor
        mayor = c;
    }
    return mayor; // Devolvemos el mayor de los tres números
}

int main() {
    int num1, num2, num3;
    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;
    std::cout << "Ingrese el tercer número: ";
    std::cin >> num3;

    // Llamada a la función EstMayor y mostrar el resultado
    int mayor = EstMayor(num1, num2, num3);
    std::cout << "El mayor de los tres números ingresados es: " << mayor << std::endl;

    return 0;
}

