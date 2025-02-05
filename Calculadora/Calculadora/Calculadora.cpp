#include <iostream>

int main() {
	int Opcion;
	do {
		float num1, num2, Resp;
		std::cout << "============================================" << std::endl;
		std::cout << "Calculadora" << std::endl;
		std::cout << "Elija una de las siguentes funciones" << std::endl;
		std::cout << "1.Suma" << std::endl;
		std::cout << "2.Resta" << std::endl;
		std::cout << "3.Mutiplicacion" << std::endl;
		std::cout << "4.Diviciono" << std::endl;
		std::cout << "5.Salir" << std::endl;
		std::cin >> Opcion;
		std::cout << "============================================" << std::endl;
		switch (Opcion)
		{
		case 1:
			std::cout << "Suma" << std::endl;
			std::cout << "Dame 2 nimeros" << std::endl;
			std::cin >> num1 >> num2;

			Resp = num1 + num2;
			std::cout << "El resultado es: " << Resp << std::endl;
			break;
		case 2:
			std::cout << "Resta" << std::endl;
			std::cout << "Dame 2 nimeros" << std::endl;
			std::cin >> num1 >> num2;

			Resp = num1 - num2;
			std::cout << "El resultado es: " << Resp << std::endl;
			break;

		case 3:
			std::cout << "Mutiplicacion" << std::endl;
			std::cout << "Dame 2 nimeros" << std::endl;
			std::cin >> num1 >> num2;

			Resp = num1 * num2;
			std::cout << "El resultado es: " << Resp << std::endl;
			break;
		case 4:
			std::cout << "Divicion" << std::endl;
			std::cout << "Dame 2 nimeros" << std::endl;
			std::cin >> num1 >> num2;

			if (num2 == 0) {
				std::cout << "Error" << std::endl;

			}
			else {
				Resp = num1 / num2;
				std::cout << "El resultado es: " << Resp << std::endl;
				break;
			}
			break;

		case 5:
			std::cout << "Saliedo..."<< std::endl;

		default:
			std::cout << "Opcion no valida" << std::endl;
			break;
		}

	} while (Opcion != 5);
	return 0;
}