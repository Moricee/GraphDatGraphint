#pragma once
#ifndef _MAT3_H_
#define _MAT3_H_
#define MAT_DIM 3
#include "Vec3.h"

class Mat3
{
private:

	float value[MAT_DIM][MAT_DIM];


public:
	Mat3();	  // Standardkonstruktor

	Mat3(float, float, float,	float, float, float,	float, float, float);	// Konstruktor mit neun �bergebbaren Werten

	Mat3(const Mat3 &mat);   // Konstruktor zum kopieren

	Mat3(int);   // Konstruktor f�r Einheitsmatrix
	
	~Mat3();   // Destruktor

	Mat3 transpose() const;	 // Transponieren der Matrix

	Mat3 add(const Mat3 &mat) const;   // Addieren von zwei Matrizen

	Mat3 substract(const Mat3 &mat) const;   // Subtrahieren von zwei Matrizen

	Mat3 multiplyMat(const Mat3 &mat) const;	// Multiplizieren von zwei Matrizen miteinander

	void randomizer();	//Matrix mit zuf�lligen Werten f�llen

	Vec3 multiplyVec(const Vec3 &vec) const;   // Multiplizieren von einer Matrix mit einem Vektor

	Vec3 divideVec(const Vec3 &vec) const;
	
	// Mat3 invert()const;   // Inverse der Matrix bestimmen falls m�glich

	float determinant3x3();   // Berechnen der Determinanten einer 3x3 Matrix

	float getValue(int, int);	// Wert aus Matrix an einer Stelle zur�ckgeben

	void changeValue(int, int, float);   // Wert der Matrix an bestimmter Stelle ver�ndern

	void ausgabe();	  // Matrix ausgeben
};

#endif