#include "Vec3.h"
#include <math.h>
#include <iostream>
#include <random>

	Vec3::Vec3(void)	/* Erzeuge eine Instanz eines Objektes vom Typ Vec3
						   und initialisiere es mit 0 für alle Werte des Vektors. */
	{
		for (int i = 0; i < VEC_DIM - 1; i++) {
			value[i] = 0.f;
		}
		
		value[VEC_DIM - 1] = 1.f;
	}



	Vec3::Vec3(float x, float y, float z)	/* Erzeuge eine Instanz eines Objektes vom Typ Vec3
											   und initialisiere es mit den übergebenen Werten (x, y, z).*/
	{
		value[0] = x;
		value[1] = y;
		value[2] = z;
		value[3] = 1;
	}



	Vec3::Vec3(const Vec3 &vec) {   // Erstelle eine Kopie des übergebenen Vektors
		for (int i = 0; i < VEC_DIM; i++) {
			value[i] = vec.value[i];
		}
	}



	Vec3::~Vec3()
	{
	}





	Vec3 Vec3::normalise() const	/* Rechne den aufrufenden Vektor in einen neuen 
									   Vektor auf die Länge eins um und gib diesen zurück. */
	{
		Vec3 normalVector;
		for (int i = 0; i < VEC_DIM - 1; i++) {
			normalVector.value[i] = (1 / Vec3::length()) * value[i];
		}
		return normalVector;
	}
	


	float Vec3::length() const	// Berechne und gib die Länge des Vektors zurück.
	{
		float length = 0.f;

		for (int i = 0; i < VEC_DIM - 1; i++) {
			length += value[i] * value[i];
		}

		return sqrtf(length);
	}



	Vec3 Vec3::add(const Vec3 &vec2) const // Addiere den Vektor mit einem dem Vektor.
	{
		Vec3 added;
		for (int i = 0; i < VEC_DIM - 1; i++){
			added.value[i] = value[i] + vec2.value[i];
		}
		return added;
	}



	Vec3 Vec3::subtract(const Vec3 &vec2) const	// Subtrahiere den Vektor mit dem übergebenem Vektor.
	{
		Vec3 substracted;
		for (int i = 0; i < VEC_DIM - 1; i++){
			substracted.value[i] = value[i] - vec2.value[i];
		}
		return substracted;
	}



	Vec3 Vec3::multiply(float m)	// Multipliziere den Vektor mit dem übergebenen float Wert
	{
		Vec3 multiplied;
		for (int i = 0; i < VEC_DIM - 1; i++) {
			multiplied.value[i] = value[i] * m;
		}
		return multiplied;
	}



	float Vec3::scalarProduct(const Vec3 &vec2) const // Berechne das Skalarprodukt von dem Vektor und dem übergebenen Vektor
	{
		float scalarProduct = 0;
		for (int i = 0; i < VEC_DIM - 1; i++) {
			scalarProduct += value[i] * vec2.value[i];
		}
		return scalarProduct;
	}



	Vec3 Vec3::crossProduct(const Vec3 &vec2) const	// Berechne das Kreuzprodukt der Zwei Vektoren und gib es als Vektor zurück.
	{
		Vec3 crossProduct;
		
		for (int i = 0; i < VEC_DIM - 1; i++) {
			crossProduct.value[i] = (value[(i + 1) % VEC_DIM - 1] * vec2.value[(i + 2) % VEC_DIM - 1]
									- vec2.value[(i + 1) % VEC_DIM - 1] * value[(i + 2) % VEC_DIM - 1]);
		}
		return crossProduct;
		
		/*
		crossProduct.value[0] = (value[1] * vec2.value[2]) - (vec2.value[1] * value[2]);
		crossProduct.value[1] = (vec2.value[0] * value[2]) - (value[0] * vec2.value[2]);
		crossProduct.value[2] = (value[0] * vec2.value[1]) - (vec2.value[0] * value[1]);

		return crossProduct;
		*/	
	}



	void Vec3::randomizer() {   // Fülle den Vektor mit zufälligen Zahlen

		std::random_device rdev;
		std::default_random_engine re(rdev());
		std::uniform_real_distribution<float> distribution(-100, 100);
		for (int i = 0; i < VEC_DIM - 1; i++) {
				value[i] = distribution(re);
		}
		value[3] = 1;
	}



	float Vec3::getValue(const int i) const	  // Gib den Wert des Vektors an der Stelle [i] zurück.
	{
		if (i >= 0 && i < VEC_DIM) {
			return value[i];
		}
		else {
			std::cout << "Bitte gueltigen Index eingeben!";
			return 0;
		}
	}



	float& Vec3::operator[](int i)
	{
		return value[i];
	}



	const float& Vec3::operator[](int i) const
	{
		return value[i];
	}



	void Vec3::changeValue(int i, float v)
	{   // Verändere den Wert des Vektors an der Stelle [i] auf den Wert von v.
		if (i >= 0 && i < VEC_DIM) {
			value[i] = v;
		}
		else {
			std::cout << "Bitte gueltigen Index eingeben!";
		}
	}



	void Vec3::ausgabe()
	{					// Überprüfungsausgabe des Vektors
		for (int i = 0; i < VEC_DIM; i++) {
			std::cout << value[i] << " " << std::endl;
		}
		std::cout << std::endl;
	}