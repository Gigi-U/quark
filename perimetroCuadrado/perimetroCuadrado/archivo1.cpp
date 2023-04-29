#include<iostream>

namespace mi_espacio {

	int x = 5;

	int y = 10;

	int suma() { return x + y; }

}
int main() {

	// Acceso a los elementos del namespace

	std::cout << mi_espacio::x << std::endl;

	std::cout << mi_espacio::y << std::endl;

	std::cout << mi_espacio::suma() << std::endl;

	return 0;

}