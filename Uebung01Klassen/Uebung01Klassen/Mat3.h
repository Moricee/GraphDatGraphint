#pragma once
#ifndef _MAT3_H_
#define _MAT3_H_
#define MAT_DIM 4
#include "Vec3.h"

class Mat3
{
private:

	float value[MAT_DIM][MAT_DIM];


public:
	Mat3();	  // Standardkonstruktor

	Mat3(float, float, float,	float, float, float,	float, float, float);	// Konstruktor mit neun übergebbaren Werten

	Mat3(const Mat3 &mat);   // Konstruktor zum kopieren

	Mat3(int);   // Konstruktor für Einheitsmatrix
	
	~Mat3();   // Destruktor

	Mat3 transpose() const;	 // Transponieren der Matrix

	Mat3 add(const Mat3 &mat) const;   // Addieren von zwei Matrizen

	Mat3 substract(const Mat3 &mat) const;   // Subtrahieren von zwei Matrizen

	Mat3 multiplyMat(const Mat3 &mat) const;	// Multiplizieren von zwei Matrizen miteinander

	void randomizer();	//Matrix mit zufälligen Werten füllen

	Vec3 multiplyVec(Vec3 &vec);   // Multiplizieren von einer Matrix mit einem Vektor
	
	// Mat3 invert()const;   // Inverse der Matrix bestimmen falls möglich

	float determinant3x3();   // Berechnen der Determinanten einer 3x3 Matrix

	void setIdentity(void);

	void setScale(const Vec3 &s);

	void setTranslate(const Vec3 &t);

	void setRotateX(float);

	void setRotateY(float);

	void setRotateZ(float);

	float getValue(int, int);	// Wert aus Matrix an einer Stelle zurückgeben

	void changeValue(int, int, float);   // Wert der Matrix an bestimmter Stelle verändern

	void ausgabe();	  // Matrix ausgeben
};

#endif