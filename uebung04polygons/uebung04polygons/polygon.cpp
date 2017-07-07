#include "polygon.h"
#include <iostream>


polygon::polygon()																/*standard constructor*/
{
	index.resize(SIZE);
	for (int i = 0; i < SIZE; i++) {
		index[i] = i;
	}

	coords.resize(SIZE * 2);
	for (int i = 0; i < (SIZE * 2); i++) {
		coords[i] = 0;
	}
}



polygon::polygon(float p0x, float p0y,  float p1x, float p1y,  float p2x, float p2y,  float p3x, float p3y,  float p4x, float p4y,  float p5x, float p5y)	/*constructor for polygon with six points*/
{
	index.resize(SIZE);
	for (int i = 0; i < SIZE; i++) {
		index[i] = i;
	}

	coords.resize(SIZE * 2);
	coords[0] = p0x; coords[1] = p3x;
	coords[2] = p0y; coords[3] = p3y;
	coords[4] = p1x; coords[5] = p4x;
	coords[6] = p1y; coords[7] = p4y;
	coords[8] = p2x; coords[9] = p5x;
	coords[10] = p2y; coords[11] = p5y;
}



polygon::~polygon()
{
}





std::vector<int> polygon::tesselate()											/*split convex polygon into triangels*/
{
	std::vector<int> tri((SIZE - 2) * 3);
	for (int i = 0, j = 1; i < (SIZE - 2) * 3; i += 3, j++) {
			tri[i] = 0;
			tri[i + 1] = index[j];
			tri[i + 2] = index[j + 1];
		
	}
	
	return tri;
}



void polygon::getPoint(const int p, float &px, float &py)						/*get the coordinates of the point at index p*/
{
	if (p > 0 && p < SIZE) {
		px = coords[(p * 2) - 1];
		py = coords[p * 2];
	}
	else {
		std::cout << "please type in a point between 0 and 5" << std::endl;
	}
}