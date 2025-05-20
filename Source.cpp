#include <allegro5/allegro.h>
#include <iostream>


int main() {
	if (!al_init()) {
		std::cerr << "Allegro did not initialize!" << std::endl;
	}
	else
		std::cout << "Allegro found" << std::endl;
}
