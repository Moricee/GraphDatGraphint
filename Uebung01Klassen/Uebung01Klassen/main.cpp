// main.cpp : Defines the entry point for the console application.
//
#include "Mat3.h"
#include <iostream>

int main(int argc, char *argv[])
{
		Vec3 vec1(1, 2, 3);																		// Initialisierungen
		Vec3 vec2(3, 2, 1);
		Mat3 mat1(1, 2, 3, 1, 5, 7, 5, 2, 1);
		mat1.changeValue(0, 0, 6);
		Mat3 mat2(4, 5, 4, 4, 2, 5, 9, 4, 3);
		Vec3 uni(1, 0, 0);
		Vec3 randomVec;
		Mat3 randomMat;
		randomMat.randomizer();
		randomVec.randomizer();
		std::cout << "Verwendete Vektoren und Matrizen" << std::endl << std::endl;

		vec1.ausgabe();
		vec2.ausgabe();
		mat1.ausgabe();
		mat2.ausgabe();
		randomMat.ausgabe();
		randomVec.ausgabe();
		std::cout << std::endl;

		std::cout << "Laenge des Vektors vec2" << std::endl << std::endl;

		std::cout << vec2.length() << std::endl << std::endl << std::endl;									// Vektorlänge



		std::cout << "vec2 normalisiert" << std::endl << std::endl;

		Vec3 normalVector = vec2.normalise();													// Normalenvektor
		normalVector.ausgabe();

		std::cout << std::endl;



		std::cout << "vec1 Ausgabe" << std::endl << std::endl;

		vec1.ausgabe();																			// Vektor ausgabe Test

		std::cout << std::endl;



		std::cout << "Addition von vec1 mit vec2" << std::endl << std::endl;

		Vec3 addedVec = vec1.add(vec2);															// Vektoraddition
		addedVec.ausgabe();

		std::cout << std::endl;



		std::cout << "Substraktion von vec1 mit vec2" << std::endl << std::endl;

		Vec3 substractedVec = vec1.subtract(vec2);												// Vektorsubtraktion
		substractedVec.ausgabe();

		std::cout << std::endl;



		std::cout << "Multiplikation von vec1 mit 5" << std::endl << std::endl;

		Vec3 multiplicated = vec1.multiply(5.0);												// Vektormultiplikation mit Skalarwert
		multiplicated.ausgabe();



		std::cout << "Skalarprodukt von vec1 mit vec2" << std::endl << std::endl;

		std::cout << vec1.scalarProduct(vec2) << std::endl << std::endl << std::endl;			// Skalarprodukt



		std::cout << "Kreuzprodukt von vec1 mit vec2" << std::endl << std::endl;

		Vec3 crossProduct = vec1.crossProduct(vec2);											// Kreuzprodukt
		crossProduct.ausgabe();

		std::cout << std::endl;



		std::cout << "getValue von Vec3 mit vec1 an der Stelle [2]" << std::endl << std::endl;

		std::cout << vec1.getValue(2) << std::endl << std::endl << std::endl;					// getValue von Vec3 Test




		std::cout << "Ausgabe von mat1" << std::endl << std::endl;

		mat1.ausgabe();																			// Matrix Ausgabe Test

		std::cout << std::endl;



		std::cout << "Transponierte von mat1" << std::endl << std::endl;

		Mat3 transposed = mat1.transpose();														// Transponierte
		transposed.ausgabe();

		std::cout << std::endl;



		std::cout << "Addition und Subtraktion von mat1 mit mat2" << std::endl << std::endl;

		Mat3 addedMat = mat1.add(mat2);															// Addieren zweier Matrizen
		addedMat.ausgabe();

		Mat3 substractedMat = mat1.substract(mat2);												// Subtrahieren zweier Matrizen
		substractedMat.ausgabe();

		std::cout << std::endl;



		std::cout << "Multiplikationsergebnisse von Matrix x Matrix und Matrix x Vektor" << std::endl << std::endl;

		Mat3 multipliedMat1 = mat1.multiplyMat(mat2);											// Matrizenmultiplikationen mit Matrix und Vektor
		multipliedMat1.ausgabe();

		Mat3 multipliedMat2 = mat1.multiplyMat(mat1);
		multipliedMat2.ausgabe();


		Vec3 multipliedVec1 = mat1.multiplyVec(vec1);
		multipliedVec1.ausgabe();

		Vec3 multipliedVec2 = mat1.multiplyVec(vec2);
		multipliedVec2.ausgabe();

		std::cout << std::endl;


		
		std::cout << "Determinanten von Matrix 1 und 2" << std::endl << std::endl;				// Determinanten

		float determinant1 = mat1.determinant3x3();
		float determinant2 = mat2.determinant3x3();
		std::cout << determinant1 << std::endl << std::endl;
		std::cout << determinant2 << std::endl << std::endl << std::endl;
		


		std::cout << "getValue von Mat3 an der Stelle [2][1]" << std::endl << std::endl;		
		
		std::cout << mat1.getValue(2, 1) << std::endl << std::endl << std::endl;				// getValue von Mat3 Test



		std::cout << "Einheitsmatrix Konstruktor Test" << std::endl << std::endl;				

		Mat3 einheitsMatrix(1);																	// Einheitsmatrix Konstruktor Test
		einheitsMatrix.ausgabe();
		std::cout << std::endl;


		getchar();
    return 0;
}

