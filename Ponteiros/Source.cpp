#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");

	int *ptr{ nullptr };
	int* ptr2{ nullptr };
	int Numero{ 102 };

	ptr = &Numero;

	ptr2 = ptr;

	std::cout << "Valor de Numero: " << Numero << std::endl;
	std::cout << "Valor de ptr: " << ptr << std::endl;

	std::cout << "Endereço de Numero: " << &Numero << std::endl;

	std::cout << "Endereço de ptr: " << &ptr << std::endl;

	// Desreferenciamento
	std::cout << "Valor que é apontado por ptr: " << *ptr << std::endl;

	*ptr2 = *ptr + 8;

	std::cout << "Valor de Numero: " << Numero << std::endl;
	std::cout << "Valor que é apontado por ptr: " << *ptr << std::endl;
	std::cout << "Valor que é apontado por ptr2: " << *ptr2 << std::endl;


	system("PAUSE");
	return 0;
}