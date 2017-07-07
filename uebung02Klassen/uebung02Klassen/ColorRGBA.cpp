#include "ColorRGBA.h"
#include <string>
#include <iostream>
#include "Mat3.h"

ColorRGBA::ColorRGBA()   // Standardkonstruktor
{
	for (int i = 0; i < RGBA_DIM; i++) {
		value[i] = 0;
	}
}



ColorRGBA::ColorRGBA(unsigned char r, unsigned char g, unsigned char b, unsigned char a)   // Setze die übergebenen Werte für r, g und b ein.
{
	if (r >= 0 && r <= 255 && g >= 0 && g <= 255 && b >= 0 && b <= 255 && a >=0 && a <= 255) {
		value[0] = r;
		value[1] = g;
		value[2] = b;
		value[3] = a;
	}
}



ColorRGBA::~ColorRGBA()
{
}





void ColorRGBA::setRGBA1(unsigned char r, unsigned char g, unsigned char b)   // Setze die RGB Werte.
{
	if (r >= 0 && r <= 255 && g >= 0 && g <= 255 && b >= 0 && b <= 255) {
		value[0] = r;
		value[1] = g;
		value[2] = b;
	}
	else {
		std::cout << "The color values have to be in the range from 0 to 255";
	}
}



void ColorRGBA::setRGBA2(float r, float g, float b)   // Setze die RGB Werte für die übergebenen float Werte.
{
	if (r >= 0.0f && r <= 1.0f && g >= 0.0f && g <= 1.0f && b >= 0.0f && b <= 1.0f){
		value[0] = r * 255;
		value[1] = g * 255;
		value[2] = b * 255;
	}
	else {
		std::cout << "The color values have to be in the range from 0.0 to 1.0";
	}
}



void ColorRGBA::setCMY(unsigned char c, unsigned char m, unsigned char y)   // Setze die RGB Werte für die übergebenen CMY Werte.
{
	if (c >= 0 && c <= 255 && m >= 0 && m <= 255 && y >= 0 && y <= 255) {
		value[0] = 255 - c;
		value[1] = 255 - m;
		value[2] = 255 - y;
	}
	else {
		std::cout << "The color values have to be in the range from 0 to 255";
	}
}



void ColorRGBA::setYIQ(float Y, float I, float Q)   // Setze die RGB Werte für die übergebenen YIQ Werte.
{
	Mat3 umat(1.0f, 1.0f, 1.0f,
		0.956f, -0.272f, -1.106f,
		0.621f, -0.647f, 1.703f);
	float yiq[] = {Y, I, Q};
	float help = 0.0f;

	for (int i = 0; i < MAT_DIM; i++) {
		for (int j = 0; j < MAT_DIM; j++) {
			help += umat.getValue(i, j) * yiq[j];
		}
	}
	for (int i = 0; i < RGBA_DIM - 1; i++) {
			value[i] = yiq[i] * 255;
	}
}



void ColorRGBA::setHSV(unsigned char h, unsigned char s, unsigned char v)   // Setze die RGB Werte für die übergebenen HSV Werte.
{
	unsigned char region, remainder, p, q, t;

	if (s == 0)
	{
		value[0] = v;
		value[1] = v;
		value[2] = v;
	}

	region = h / 43;
	remainder = (h - (region * 43)) * 6;

	p = (v * (255 - s)) >> 8;
	q = (v * (255 - ((s * remainder) >> 8))) >> 8;
	t = (v * (255 - ((s * (255 - remainder)) >> 8))) >> 8;

	switch (region)
	{
	case 0:
		value[0] = v; value[1] = t; value[2] = p;
		break;
	case 1:
		value[0] = q; value[1] = v; value[2] = p;
		break;
	case 2:
		value[0] = p; value[1] = v; value[2] = t;
		break;
	case 3:
		value[0] = p; value[1] = q; value[2] = v;
		break;
	case 4:
		value[0] = t; value[1] = p; value[2] = v;
		break;
	default:
		value[0] = v; value[1] = p; value[2] = q;
		break;
	}
}



void ColorRGBA::convertToRGB(float r, float g, float b, float a)   // Rechne die übergebenen float RGB Werte in Bit RGB Werte um und gib diese aus.
{
	std::cout << "r: " << r * 255 << std::endl << "g: " << g * 255
		<< std::endl << "b: " << b * 255 << std::endl << "a: " << a * 255 << std::endl;
}




void ColorRGBA::convertToCMY(float r, float g, float b)   // Rechne die übergebenen float RGB Werte in CMY Werte um und gib diese aus.
{
	std::cout <<"C: " << 255 - r * 255 << std::endl << "M: " << 255 - g * 255 
					<< std::endl << "Y: " << 255 - b * 255 << std::endl;
}



void ColorRGBA::convertToYIQ(float y, float i, float q)   // Rechne die übergebenen float RGB Werte in YIQ Werte um und gib diese aus.
{
	Mat3 umat(0.299f, 0.596f, 0.212f,    0.587f, -0.275f, -0.523f,    0.114f, -0.321f, 0.311f);
	Vec3 uvec(y, i, q);
	float h1, h2, h3 = 0;
	h1 = y * umat.getValue(0, 0) + i * umat.getValue(0, 1) + q * umat.getValue(0, 2);
	h2 = y * umat.getValue(1, 0) + i * umat.getValue(1, 1) + q * umat.getValue(1, 2);
	h3 = y * umat.getValue(2, 0) + i * umat.getValue(2, 1) + q * umat.getValue(2, 2);
	Vec3 yiq;
	yiq.changeValue(0, h1);
	yiq.changeValue(1, h2);
	yiq.changeValue(2, h3);
	char charr[] = {'Y', 'I', 'Q'};

	for (int i = 0; i < RGBA_DIM - 1; i++) {
			std::cout << charr[i] << ": " << yiq[i] << std::endl;
	}
}



void ColorRGBA::convertToHSV(float R, float G, float B)   // Rechne die übergebenen float RGB Werte in HSV Werte um und gib diese aus.
{
	float V = 0;
	float H = 0;
	float S = 0;
	float d = 0;
	V = max(R, G, B);
	if (V > 0)	S = (V - min(R, G, B)) / V;
	else	if (V == 0)	S = 0;
	d = max(R, G, B) - min(R, G, B);
	if (S > 0 && d > 0) {
		if (R == max(R, G, B))	H = 0 + (G - B) / d;
		if (G == max(R, G, B))	H = 2 + (B - R) / d;
		if (B == max(R, G, B))	H = 4 + (R - G) / d;
	}
	H *= 60;	//	60°
	if (H<0)	H += 360;	//	360°

	std::cout << "h: " << H << std::endl << "s: " << S
		<< std::endl << "v: " << V << std::endl;
}



void ColorRGBA::convertToCMY()   // Rechne die bit RGB Werte in CMY Werte um und gib diese aus.
{
	std::cout << "C: " << 255 - value[0] << std::endl << "M: " << 255 - value[1]
		<< std::endl << "Y: " << 255 - value[2] << std::endl;
}



void ColorRGBA::convertToYIQ()   // Rechne die bit RGB Werte in YIQ Werte um und gib diese aus.
{
	Mat3 umat(0.299f, 0.596f, 0.212f, 0.587f, -0.275f, -0.523f, 0.114f, -0.321f, 0.311f);
	float h1, h2, h3 = 0;
	h1 = value[0] * umat.getValue(0, 0) + value[1] * umat.getValue(0, 1) + value[2] * umat.getValue(0, 2);
	h2 = value[0] * umat.getValue(1, 0) + value[1] * umat.getValue(1, 1) + value[2] * umat.getValue(1, 2);
	h3 = value[0] * umat.getValue(2, 0) + value[1] * umat.getValue(2, 1) + value[2] * umat.getValue(2, 2);
	Vec3 yiq;
	yiq.changeValue(0, h1);
	yiq.changeValue(1, h2);
	yiq.changeValue(2, h3);
	char charr[] = { 'Y', 'I', 'Q' };


	for (int i = 0; i < RGBA_DIM - 1; i++) {
		std::cout << charr[i] << ": " << yiq[i] / 255 << std::endl;
	}
}


void ColorRGBA::convertToHSV()   // Rechne die bit RGB Werte in HSV Werte um und gib diese aus.
{
	float V = 0;
	float H = 0;
	float S = 0;
	float d = 0;
	V = max(value[0], value[1], value[2]);
	if (V > 0) S = (V - min(value[0], value[1], value[2])) / V;
	else	if (V == 0)	S = 0;
	d = max(value[0], value[1], value[2]) - min(value[0], value[1], value[2]);
	if (S>0 && d>0) {
		if (value[0] == max(value[0], value[1], value[2]))	H = 0 + (value[1] - value[2]) / d;
		if (value[1] == max(value[0], value[1], value[2]))	H = 2 + (value[2] - value[0]) / d;
		if (value[2] == max(value[0], value[1], value[2]))	H = 4 + (value[0] - value[1]) / d;
	}
	H *= 60;	//	60°
	if (H < 0) {
		H += 360;
	}//	360°

	std::cout << "h: " << H << std::endl << "s: " << S
		<< std::endl << "v: " << V / 255 << std::endl;
}



void ColorRGBA::convertToRGBr(float &r, float &g, float &b)   // Rechne die übergebenen float RGB Werte in Bit RGB Werte um und gib diese aus.
{
	r = value[0];
	g = value[1];
	b = value[2];
}




void ColorRGBA::convertToCMYr(float &r, float &g, float &b)   // Rechne die übergebenen float RGB Werte in CMY Werte um und gib diese aus.
{
	r = 255.0f - value[0];
	g = 255.0f - value[1];
	b = 255.0f - value[2];
}



void ColorRGBA::convertToYIQr(float &y, float &i, float &q)   // Rechne die übergebenen float RGB Werte in YIQ Werte um und gib diese aus.
{
	Mat3 umat(0.299f, 0.596f, 0.212f, 0.587f, -0.275f, -0.523f, 0.114f, -0.321f, 0.311f);

	y = value[0] * umat.getValue(0, 0) + value[1] * umat.getValue(0, 1) + value[2] * umat.getValue(0, 2);
	i = value[0] * umat.getValue(1, 0) + value[1] * umat.getValue(1, 1) + value[2] * umat.getValue(1, 2);
	q = value[0] * umat.getValue(2, 0) + value[1] * umat.getValue(2, 1) + value[2] * umat.getValue(2, 2);
	
}



void ColorRGBA::convertToHSVr(float &H, float &S, float &V)   // Rechne die übergebenen float RGB Werte in HSV Werte um und gib diese aus.
{

	float d = 0;
	V = max(value[0], value[1], value[2]);
	if (V > 0) S = (V - min(value[0], value[1], value[2])) / V;
	else	if (V == 0)	S = 0;
	d = max(value[0], value[1], value[2]) - min(value[0], value[1], value[2]);
	if (S>0 && d>0) {
		if (value[0] == max(value[0], value[1], value[2]))	H = 0 + (value[1] - value[2]) / d;
		if (value[1] == max(value[0], value[1], value[2]))	H = 2 + (value[2] - value[0]) / d;
		if (value[2] == max(value[0], value[1], value[2]))	H = 4 + (value[0] - value[1]) / d;
	}
	H *= 60;	//	60°
	if (H < 0) {
		H += 360;
	}//	360°
}

/*
float V = 0;
float H = 0;
float S = 0;
float d = 0;

int r = value[0];
int g = value[1];
int b = value[2];

float hilf0 = 0;
float hilf1 = 0;
float hilf2 = 0;

hilf0 = r / 255;
hilf1 = g / 255;
hilf2 = b / 255;

V = max(hilf0, hilf1, hilf2);
if (V > 0) S = (V - min(hilf0, hilf1, hilf2)) / V;
else	if (V == 0)	S = 0;
d = max(hilf0, hilf1, hilf2) - min(hilf0, hilf1, value[2]);
if (S>0 && d>0) {
	if (hilf0 == max(hilf0, hilf1, hilf2))	H = 0 + (hilf1 - hilf2) / d;
	if (hilf1 == max(hilf0, hilf1, hilf2))	H = 2 + (hilf2 - hilf0) / d;
	if (hilf2 == max(hilf0, hilf1, hilf2))	H = 4 + (hilf0 - hilf1) / d;
}
H *= 60;	//	60°
if (H < 0) {
	H += 360;
}//	360°
*/

float ColorRGBA::max(float R, float G, float B)   // Ermittelt den Größten der drei übergebenen Werte.
{
	if (R >= G && R >= B) {
		return R;
	}
	else if (G >= R && G >= B) {
		return G;
	}
	else {
		return B;
	}
}



float ColorRGBA::min(float R, float G, float B)   // Ermittelt den Kleinsten der drei übergebenen Werte.
{
	if (R <= G && R <= B) {
		return R;
	}
	else if (G <= R && G <= B) {
		return G;
	}
	else {
		return B;
	}
}



unsigned char ColorRGBA::red(void) const   // Gib rot aus.
{
	return value[0];
}



unsigned char ColorRGBA::green(void) const   // Gib grün aus.
{
	return value[1];
}



unsigned char ColorRGBA::blue(void) const   // Gib blau aus.
{
	return value[2];
}



float ColorRGBA::convertToGreyscale(void) const   // Rechne die RGB Werte in Graustufen um.
{
	return (0.299f * value[0]) + (0.587f * value[1]) + (0.114f * value[2]);
}



void ColorRGBA::changeValue(int i, float v) {   // Verändere den Wert des Vektors an der Stelle [i] auf den Wert von v.
	if (i >= 0 && i < RGBA_DIM) {
		value[i] = v * 255;
	}
	else {
		std::cout << "Bitte gueltigen Index eingeben!";
	}
}



void ColorRGBA::ausgabe(void) const{					// Überprüfungsausgabe des Vektors
	for (int i = 0; i < RGBA_DIM; i++) {
		int v = value[i];
		std::cout << v << std::endl;
	}
	std::cout << std::endl;
}