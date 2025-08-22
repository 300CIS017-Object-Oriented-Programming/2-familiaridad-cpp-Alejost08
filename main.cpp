// main.cpp
#include <iostream>
#include "matematicas.h" // Incluimos nuestro contrato
using namespace std;

void probarMatematicas()

{
    std::cout << "Bienvenido al programa de la calculadora" << std::endl;
    int opcion;
    do {
        std::cout << "\n--- Menú de operaciones ---\n";
        std::cout << "1. suma\n";
        std::cout << "2. resta\n";
        std::cout << "3. factorial\n";
        std::cout << "4. Exponente\n";
        cout<< "5.Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:{

                std::cout << "Elegiste Suma\n";
                std::cout << "Ingresa el primer numero: " << std::endl;
                int num1;
                std::cin >> num1;
                int num2;
                std::cout << "Ingresa el segundo numero: " << std::endl;
                std::cin >> num2;
                int resultado_suma = sumar(num1,num2); // Funciona
                std::cout << "Resultado de la Suma: " << resultado_suma << std::endl;
                break;
                 }
            case 2: {
                std::cout << "Elegiste Resta\n";
                int num1;
                std::cout << "Ingresa el primer numero: " << std::endl;
                std::cin >> num1;
                int num2;
                std::cout << "Ingresa el segundo numero: " << std::endl;
                std::cin >> num2;
                int resultado_resta = restar(num1, num2); // Funciona
                std::cout << "resultado de la Resta: " << resultado_resta << std::endl;
                break;
                }
            case 3: {
                std::cout << "Elegiste Factorial\n";
                int num9;
                std::cout << "Ingresa el numero del que necesita su factorial" << std::endl;
                std::cin >> num9;
                int resultado_factorial = factorial(num9); //Funciona
                std::cout << "Factorial: "<< resultado_factorial<<std::endl;

                break;
                }
            case 4: {
                std::cout << "Exponente\n";
                int base;
                cout << "Ingresa el numero del que necesitas su exponente: " << endl;
                cin >> base;
                int exponente;
                cout <<"Escribe el exponente que lleva este numero: "<< endl;
                cin >> exponente;
                int resultado_exponente = potencia(base, exponente); // Funciona
                cout << "La potencia de este numero es :"<< resultado_exponente << endl;

                break;
                }
            case 5:
                std::cout << "Salir\n";
                break;
            default:
                std::cout << "Opción no válida. Intente de nuevo.\n";
        }
    } while (opcion != 5);







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
