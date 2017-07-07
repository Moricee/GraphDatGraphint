#pragma once
#ifndef _ColorRGBA_H_
#define _ColorRGBA_H_
#define RGBA_DIM 4

class ColorRGBA
{

private:

	unsigned char value[RGBA_DIM];

public:
	ColorRGBA(void);   // Standardkonstruktor

	ColorRGBA(unsigned char r, unsigned char g, unsigned char b, unsigned char a = 0);   // Erzeugt Farbvektor mit �bergebenen Werten.

	~ColorRGBA(void);


	void setRGBA1(unsigned char, unsigned char, unsigned char);   // Schreibt �bergebene RGB Werte direkt in den RGB Vektor.

	void setRGBA2(float, float, float);   // Rechnet �bergebene float RGB Werte in Bit RGB Werte um und schreibt sie in den RGB Vektor.

	void setCMY(unsigned char, unsigned char, unsigned char);   // Rechnet �bergebene CMY Werte in Bit RGB Werte um und schreibt sie in den RGB Vektor.

	void setYIQ(float, float, float);   // Rechnet �bergebene YIQ Werte in Bit RGB Werte um und schreibt sie in den RGB Vektor.

	void setHSV(unsigned char, unsigned char, unsigned char);   // Rechnet �bergebene HSV Werte in Bit RGB Werte um und schreibt sie in den RGB Vektor.

	void convertToRGB(float, float, float, float);   // Rechnet �bergebene float RGB Werte in Bit RGB Werte um und gibt diese aus.

	void convertToCMY(float, float, float);	  // Rechnet �bergebene float RGB Werte in CMY Werte um und gibt diese aus.
	
	void convertToYIQ(float, float, float);   // Rechnet �bergebene float RGB Werte in YIQ Werte um und gibt diese aus.

	void convertToHSV(float, float, float);   // Rechnet �bergebene float RGB Werte in HSV Werte um und gibt diese aus.

	void convertToCMY();   // Rechnet enthaltene Bit RGB Werte in CMY Werte um und gibt diese aus.
	
	void convertToYIQ();   // Rechnet enthaltene Bit RGB Werte in YIQ Werte um und gibt diese aus.

	void convertToHSV();   // Rechnet enthaltene Bit RGB Werte in HSV Werte um und gibt diese aus.

	void convertToRGBr(float &r, float &g, float &b);   // Rechnet �bergebene float RGB Werte in Bit RGB Werte um und gibt diese aus.

	void convertToCMYr(float &c, float &m, float &y);	  // Rechnet �bergebene float RGB Werte in CMY Werte um und gibt diese aus.

	void convertToYIQr(float &y, float &i, float &q);   // Rechnet �bergebene float RGB Werte in YIQ Werte um und gibt diese aus.

	void convertToHSVr(float &R, float &G, float &B);   // Rechnet �bergebene float RGB Werte in HSV Werte um und gibt diese aus.

	float ColorRGBA::max(float, float, float);   // Gibt den kleinsten der drei float Werte zur�ck.

	float ColorRGBA::min(float, float, float);   // Gibt den gr��ten der drei float Werte zur�ck.

	unsigned char red(void) const;   // Gibt Wert von r zur�ck.

	unsigned char green(void) const;   // Gibt Wert von g zur�ck.

	unsigned char blue(void) const;   // Gibt Wert von b zur�ck.

	float convertToGreyscale(void) const;   // Rechnet RGB Vektor in Graustufen um und gibt diese zur�ck.

	void ausgabe(void) const;   // Gibt enthaltene RGB Werte aus.

	void changeValue(int i, float v);   // Ver�ndert Wert an der Stelle i.
};

#endif