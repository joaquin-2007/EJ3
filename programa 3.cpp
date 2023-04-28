#include <iostream>

// Funci�n que devuelve el mayor de tres n�meros
int EstMayor(int a, int b, int c) {
    int mayor = a; // Asumimos que el primer n�mero es el mayor
    if (b > mayor) { // Si el segundo n�mero es mayor, actualizamos la variable mayor
        mayor = b;
    }
    if (c > mayor) { // Si el tercer n�mero es mayor, actualizamos la variable mayor
        mayor = c;
    }
    return mayor; // Devolvemos el mayor de los tres n�meros
}

int main() {
    int num1, num2, num3;
    std::cout << "Ingrese el primer n�mero: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo n�mero: ";
    std::cin >> num2;
    std::cout << "Ingrese el tercer n�mero: ";
    std::cin >> num3;

    // Llamada a la funci�n EstMayor y mostrar el resultado
    int mayor = EstMayor(num1, num2, num3);
    std::cout << "El mayor de los tres n�meros ingresados es: " << mayor << std::endl;

    return 0;
}

