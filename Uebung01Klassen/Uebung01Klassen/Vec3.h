#pragma once
#ifndef _VEC3_H_
#define _VEC3_H_
#define VEC_DIM 3

class Vec3
{
private:
	float value[VEC_DIM];   // Array, dass die Werte des Vektors enth�lt

public:
	Vec3(void);	  // Konstruktor, der den Vektor mit nullen initialisiert

	Vec3(float x, float y, float z);   // Konstruktor, der den Vektor mit den �bergebenen Werten (x, y, z) initialisiert.

	Vec3(Vec3 &vec);   // Kopie des �bergebenen Vektors erstellen

	~Vec3();


	Vec3 normalise() const;   // Methode um einen Normalenvektor zu berechnen

	float length() const;   // L�nge eines Vektors berechnen

	Vec3 add(const Vec3 &vec2) const;	  // Vektoren addieren

	Vec3 subtract(const Vec3 &vec2) const;   // Vektoren subtrahieren

	Vec3 multiply(float m);   // Vektoren multiplizieren

	float scalarProduct(const Vec3 &vec2) const;   // Skalarprodukt berechnen

	Vec3 crossProduct(const Vec3 &vec2)const;   // Kreuzprodukt berechnen

	void randomizer();

	float getValue(const int) const;   // Wert des Vektors an der Stelle des Index zur�ckgeben

	void changeValue(int, float);   // Wert des Vektors ver�ndern

	void ausgabe();	 // Vektor ausgeben
	
};

#endif //_VEC3_H_