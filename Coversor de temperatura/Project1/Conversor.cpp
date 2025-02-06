#include <iostream>
float numero, respuesta;
void CelsiusFahrenheit() {
	std::cout << "De Celsius a Fahrenheit" << std::endl;
	std::cout << "Deme los grados en Celsius" << std::endl;
	std::cin >> numero;

	respuesta = (numero * 9 / 5) + 32;

	std::cout << "La respuesta es: " << respuesta << std::endl;
}

void FahrenheitCelsius() {
	std::cout << "De Fahrenheit a Celsius" << std::endl;
	std::cout << "Deme los grados en Fahrenheit" << std::endl;
	std::cin >> numero;

	respuesta = (numero - 32) * 5 / 9 ;


	std::cout << "La respuesta es: " << respuesta << std::endl;
}
int main() {
	int opcion;
	do {
		std::cout << "====================================================" << std::endl;
		std::cout << "Covierte la temperatura" << std::endl;
		std::cout << "Selecione una opcion" << std::endl;
		std::cout << "1.Fahrenheit" << std::endl;
		std::cout << "2.Celsius" << std::endl;
		std::cout << "3.Salir" << std::endl;
		std::cin >> opcion;
		std::cout << "====================================================" << std::endl;
		switch (opcion) {
		case 1:
			CelsiusFahrenheit();
			break;
		case 2:
			FahrenheitCelsius();
			break;
		case 3:
			std::cout << "Saliendo..." << std::endl;
				break;

		default:
				std::cout << "Opcion no valida" << std::endl;
		break;
		}
	} while (opcion != 3);
	return 0;
}