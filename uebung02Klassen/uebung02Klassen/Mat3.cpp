#include "Mat3.h"
#include <iostream>
#include <random>

Mat3::Mat3(void)   // Standardkonstruktor
{
	for (int i = 0; i < MAT_DIM; i++) {
		for (int j = 0; j < MAT_DIM; j++) {
			value[j][i] = 0;
		}
	}
}



Mat3::Mat3(float a, float b, float c, float d, float e, float f, float g, float h, float i)   // Initialisiere eine Matrix mit den neun übergebenen Werten
{
	value[0][0] = a;	value[0][1] = d;	value[0][2] = g;
	value[1][0] = b;	value[1][1] = e;	value[1][2] = h;
	value[2][0] = c;	value[2][1] = f;	value[2][2] = i;
}



Mat3::Mat3(const Mat3 &mat)   // Erstelle eine Kopie der übergeben Matrix
{
	for (int i = 0; i < MAT_DIM; i++) {
		for (int j = 0; j < MAT_DIM; j++) {
			value[i][j] = mat.value[i][j];
		}
	}
}



Mat3::Mat3(int)   // Initialisiere eine Einheitsmatrix
{
	for (int i = 0; i < MAT_DIM; i++) {
		for (int j = 0; j < MAT_DIM; j++) {
			if (i == j) {
				value[i][j] = 1;
			}
			else {
				value[i][j] = 0;
			}
		}
	}
}



Mat3::~Mat3()
{
}




Mat3 Mat3::transpose() const{   // Transponiere die Matrix
	Mat3 transposed;

	for (int i = 0; i < MAT_DIM; i++) {
		for (int j = 0; j < MAT_DIM; j++) {
			transposed.value[j][i] = value[i][j];
		}
	}

	return transposed;
	/*
	transponierte.value[0][0] = value[0][0];
	transponierte.value[1][0] = value[0][1];
	transponierte.value[2][0] = value[0][2];
	transponierte.value[0][1] = value[1][0];
	transponierte.value[1][1] = value[1][1];
	transponierte.value[2][1] = value[1][2];
	transponierte.value[0][2] = value[2][0];
	transponierte.value[1][2] = value[2][1];
	transponierte.value[2][2] = value[2][2];
	*/

}



Mat3 Mat3::add(const Mat3 &mat) const{   // Addiere die Matrix mit der übergebenen Matrix
	Mat3 added;
	for (int i = 0; i < MAT_DIM; i++) {
		for (int j = 0; j < MAT_DIM; j++) {
			added.value[j][i] = value[j][i] + mat.value[j][i];
		}
	}
	return added;
}



Mat3 Mat3::substract(const Mat3 &mat) const{   // Subtrahiere die Matrix von der übergebenen Matrix
	Mat3 substracted;
	for (int i = 0; i < MAT_DIM; i++) {
		for (int j = 0; j < MAT_DIM; j++) {
			substracted.value[j][i] = value[j][i] - mat.value[j][i];
		}
	}
	return substracted;
}



/*
Multipliziere die Spalten von der Matrix mit den Zeilen der übergebenen Matrix,
speichere die Werte in einer neuen Matrix (multiplicated) und gib diese zurück.
*/
Mat3 Mat3::multiplyMat(const Mat3 &mat) const
{
	Mat3 multiplied;
	float help = 0.f;

	for (int z = 0; z < MAT_DIM; z++) {		
		for (int i = 0; i < MAT_DIM; i++) {	
			for (int j = 0; j < MAT_DIM; j++) {			// 3^3 Berechnungen müssen gemacht werden
				help += value[z][j] * mat.value[j][i];	// Speichere das Ergebnis der Multiplikationen in help.
			}											// 3^2 Werte müssen gespeichert werden
			multiplied.value[z][i] = help;			// Speichere den Wert von help in die neue Matrix.
			help = 0.f;
		}
	}

	return multiplied;
}


/*
Mat3 Mat3::multiplyVec(Vec3 &vec) {   //Multiplizieren die Matrix mit dem übergebenen Vektor
	Mat3 multipliedVec;
	float help = 0.f;

	for (int i = 0; i < MAT_DIM; i++) {
		for (int j = 0; j < MAT_DIM; j++) {
			help += value[i][j] * vec.getValue(i);
		}
		multipliedVec.value[i][0] = help;
	}
	
	return multipliedVec;
}
*/


Vec3 Mat3::multiplyVec(const Vec3 &vec) const {   //Multiplizieren die Matrix mit dem übergebenen Vektor
	Vec3 multipliedVec;
	float help = 0.0f;

	for (int i = 0; i < MAT_DIM; i++) {
		for (int j = 0; j < MAT_DIM; j++) {
			help += value[i][j] * vec.getValue(j);
		}
		multipliedVec.changeValue(i, help);
	}

	return multipliedVec;
}




float Mat3::determinant3x3() {   // Rechne die Determinante einer 3x3 Matrix aus
	float determ = 0.f;
	determ = value[0][0] * value[1][1] * value[2][2]
		   + value[0][1] * value[1][2] * value[2][0]
		   + value[0][2] * value[1][0] * value[2][1]
		   - value[0][2] * value[1][1] * value[2][0]
		   - value[0][1] * value[1][0] * value[2][2]
		   - value[0][0] * value[1][2] * value[2][1];

	return determ;
}



void Mat3::randomizer() {   // Befülle die Matrix mit zufälligen float Werten

	std::random_device rdev;
	std::default_random_engine re(rdev());
	std::uniform_real_distribution<float> distribution(-100, 100);
	for (int i = 0; i < MAT_DIM; i++) {
		for (int j = 0; j < MAT_DIM; j++) {
			value[i][j] = distribution(re);
		}
	}
}



/*
Mat3 Mat3::inverse(Mat3 &mat) const

{
	if (mat.determinant3x3() == 0) {
		std::cout << "Die Determinante ist 0. Inverse kann nicht gebildet werden.";
	}
	else {
		Mat3 inverse(1);
		Mat3 helpMatrix(mat);   // Einheitsmatrix   
		for (int i = 0; i < VEC_DIM - 1; i++)
		{
			// Zeilen vertauschen, falls das Pivotelement eine Null ist
			if (mat.value[i][i] == 0.0)
			{
				for (int j = i + 1; j < VEC_DIM; j++)
				{
					if (mat.value[j][i] != 0.0)
					{
						for (int k = 0; k < VEC_DIM; k++) {
							float help = 0;
							help = mat.value[i][k];
							mat.value[i][k] = mat.value[j][k];
							mat.value[j][k] = help;
						}
						break;
					}
				}
			}
		}
		if (helpMatrix.getValue(0, 0) != 1){
			for (int i = 0; i < VEC_DIM; i++) {
					helpMatrix.value[0][i] /= helpMatrix.value[0][0];
					inverse.value[0][i] /= helpMatrix.value[0][0];
			}
		}
		for (int i = 0; i < VEC_DIM; i++) {
			helpMatrix.value[1][i] = helpMatrix.value[0][i] * helpMatrix.value[1][0] - helpMatrix.value[1][i];
			inverse.value[1][i] = inverse.value[0][i] * helpMatrix.value[1][0] - helpMatrix.value[1][i];

			helpMatrix.value[2][i] = helpMatrix.value[0][i] * helpMatrix.value[2][0] - helpMatrix.value[2][i];
			inverse.value[2][i] = inverse.value[0][i] * helpMatrix.value[2][0] - helpMatrix.value[2][i];				
		}
		for (int i = 0; i < VEC_DIM; i++) {
			helpMatrix.value[1][i] /= helpMatrix.value[1][1];
			inverse.value[1][i] /= helpMatrix.value[1][1];
		}
		for (int i = 0; i < VEC_DIM; i++) {
			helpMatrix.value[2][i] = helpMatrix.value[1][i] * helpMatrix.value[2][1] - helpMatrix.value[2][i];
			inverse.value[2][i] = inverse.value[1][i] * helpMatrix.value[2][1] - helpMatrix.value[2][i];
		}
		for (int i = 0; i < VEC_DIM; i++) {
			helpMatrix.value[2][i] /= helpMatrix.value[2][2];
			inverse.value[2][i] /= helpMatrix.value[2][2];
		}
		for (int i = 0; i < VEC_DIM; i++) {
			
		}
	}
}
*/



float Mat3::getValue(int i, int j) {	// Gib den Wert der Matrix an der Stelle [i][j] aus.
	if (i >= 0 && j >= 0 && i < VEC_DIM && j < VEC_DIM) {
		return value[i][j];
	}
	else {
		std::cout << "Bitte gueltigen Index eingeben!";
		return 0;
	}
}



void Mat3::changeValue(int i, int j, float v) {   // Verändere den Wert der Matrix an der Stelle [i][j] auf den Wert von v
	if (i >= 0 && j >= 0 && i < VEC_DIM && j < VEC_DIM) {
		value[i][j] = v;
	}
	else {
		std::cout << "Bitte gueltigen Index eingeben!";
	}
}



void Mat3::ausgabe() {					// Überprüfungsausgabe der Matrix
	for (int i = 0; i < MAT_DIM; i++) {
		for (int j = 0; j < MAT_DIM; j++) {
			std::cout << value[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}