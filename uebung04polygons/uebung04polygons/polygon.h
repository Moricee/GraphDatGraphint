#pragma once
#ifndef _POLYGON_H_
#define _POLYGON_H_
#include <vector>

const std::size_t SIZE = 6;

class polygon
{
	
private:
	std::vector<float> coords;																					/*array for point coordinates*/
	std::vector<int> index;																						/*array for the indexes of the points*/

public:
	polygon();																									/*standard constructor*/
	polygon(float, float,  float, float,  float, float,  float, float,  float, float,  float, float);			/*constructor for polygon with six points*/
	~polygon();


	std::vector<int> tesselate();																				/*split convex polygon into triangels*/
	

	void getPoint(const int, float &px, float &pY);																/*get the coordinates of the point at an index*/
};

#endif