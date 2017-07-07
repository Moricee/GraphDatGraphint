// uebung04polygons.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//


#include <iostream>
#include "polygon.h"


int main()
{
	polygon pol(1.0f, 1.0f, 2.0f, 2.0f, 3.0f, 3.0f, 4.0f, 4.0f, 5.0f, 5.0f, 6.0f, 6.0f);
	std::vector<int> triangels;
	triangels = pol.tesselate();

	std::cout << "Die Eckpunkte der Dreiecke sind:" << std::endl << std::endl;

	for (int i = 1; i <= (SIZE - 2) * 3; i++) {
		std::cout << "p" << triangels[i - 1] << ", ";
		if (i % 3 == 0) {
			std::cout << std::endl;
		}
	}

	getchar();
    return 0;
}





