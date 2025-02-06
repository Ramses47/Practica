#include <iostream>
#include <ctime>
int numero;
void Generador() {
	srand(time(NULL));
	for (int i = 0; i <= 10; i++) {
		int respuesta = (rand() % numero) + 1;
		std::cout << "El numero es: " << respuesta << std::endl;
	}
}

int main() {
	std::cout << "====================================================" << std::endl;
	std::cout << "Generador de numeros aleatorios" << std::endl;
	std::cout << "Deme un limite y se imprimiran 10 numeros aleatorios"<<std::endl;
	std::cin >> numero;
	Generador();
	std::cout << "====================================================" << std::endl;
	return 0;
}