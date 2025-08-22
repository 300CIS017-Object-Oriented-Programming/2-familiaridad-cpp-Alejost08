// main.cpp
#include <iostream>
#include "matematicas.h" // Incluimos nuestro contrato
using namespace std;

void probarMatematicas()
{
    std::cout << "Bienvenido al programa de la calculadora" << std::endl;
    std::cout << "Ingresa el primer numero: " << std::endl;
    int num1;
    std::cin >> num1;
    std::cin.clear();
    std::cin.ignore(10000, '\n');
    int num2;
    std::cout << "Ingresa el segundo numero: " << std::endl;
    std::cin >> num2;
    std::cin.clear();
    std::cin.ignore(10000, '\n');
    int num9;
    std::cout << "Ingresa el numero del que necesita su factorial" << std::endl;
    std::cin >> num9;
    std::cin.clear();
    std::cin.ignore(10000, '\n');
    int base;
    cout << "Ingresa el numero del que necesitas su exponente: " << endl;
    cin >> base;
    cin.clear();
    cin.ignore(10000, '\n');
    int exponente;
    cout <<"Escribe el exponente que lleva este numero: "<< endl;
    cin >> exponente;
    cin.clear();
    cin.ignore(10000, '\n');


    int resultado_factorial = factorial(num9); //Funciona
    int resultado_suma = sumar(num1, num2); // Funciona
    int resultado_resta = restar(num1, num2); // Funciona
    int resultado_exponente = potencia(base, exponente); // Funciona

    std::cout << "Suma: " << resultado_suma << std::endl;
    std::cout << "Resta: " << resultado_resta << std::endl;
    std::cout << "Factorial: "<< resultado_factorial<<std::endl;
    cout << "La potencia de este numero es :"<< resultado_exponente << endl;
}

void probarArreglos()
{
    int cantElementos = 10;
    int arreglo[cantElementos]; // Declaración de un arreglo
    llenarArreglo(arreglo, cantElementos);
    std::cout << "Arreglo lleno: ";
    mostrarArreglo(arreglo, cantElementos);
    std::cout << " Sumando pares" << std::endl;
    int suma = sumarPares(arreglo, cantElementos);
    std::cout << "Suma de elementos en posiciones pares: " << suma << std::endl;
}

int main()
{
    probarMatematicas();
    probarArreglos();
    return 0;
}
