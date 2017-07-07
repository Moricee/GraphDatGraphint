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

	ColorRGBA(unsigned char r, unsigned char g, unsigned char b, unsigned char a = 0);   // Erzeugt Farbvektor mit übergebenen Werten.

	~ColorRGBA(void);


	void setRGBA1(unsigned char, unsigned char, unsigned char);   // Schreibt übergebene RGB Werte direkt in den RGB Vektor.

	void setRGBA2(float, float, float);   // Rechnet übergebene float RGB Werte in Bit RGB Werte um und schreibt sie in den RGB Vektor.

	void setCMY(unsigned char, unsigned char, unsigned char);   // Rechnet übergebene CMY Werte in Bit RGB Werte um und schreibt sie in den RGB Vektor.

	void setYIQ(float, float, float);   // Rechnet übergebene YIQ Werte in Bit RGB Werte um und schreibt sie in den RGB Vektor.

	void setHSV(unsigned char, unsigned char, unsigned char);   // Rechnet übergebene HSV Werte in Bit RGB Werte um und schreibt sie in den RGB Vektor.

	void convertToRGB(float, float, float, float);   // Rechnet übergebene float RGB Werte in Bit RGB Werte um und gibt diese aus.

	void convertToCMY(float, float, float);	  // Rechnet übergebene float RGB Werte in CMY Werte um und gibt diese aus.
	
	void convertToYIQ(float, float, float);   // Rechnet übergebene float RGB Werte in YIQ Werte um und gibt diese aus.

	void convertToHSV(float, float, float);   // Rechnet übergebene float RGB Werte in HSV Werte um und gibt diese aus.

	void convertToCMY();   // Rechnet enthaltene Bit RGB Werte in CMY Werte um und gibt diese aus.
	
	void convertToYIQ();   // Rechnet enthaltene Bit RGB Werte in YIQ Werte um und gibt diese aus.

	void convertToHSV();   // Rechnet enthaltene Bit RGB Werte in HSV Werte um und gibt diese aus.

	void convertToRGBr(float &r, float &g, float &b);   // Rechnet übergebene float RGB Werte in Bit RGB Werte um und gibt diese aus.

	void convertToCMYr(float &c, float &m, float &y);	  // Rechnet übergebene float RGB Werte in CMY Werte um und gibt diese aus.

	void convertToYIQr(float &y, float &i, float &q);   // Rechnet übergebene float RGB Werte in YIQ Werte um und gibt diese aus.

	void convertToHSVr(float &R, float &G, float &B);   // Rechnet übergebene float RGB Werte in HSV Werte um und gibt diese aus.

	float ColorRGBA::max(float, float, float);   // Gibt den kleinsten der drei float Werte zurück.

	float ColorRGBA::min(float, float, float);   // Gibt den größten der drei float Werte zurück.

	unsigned char red(void) const;   // Gibt Wert von r zurück.

	unsigned char green(void) const;   // Gibt Wert von g zurück.

	unsigned char blue(void) const;   // Gibt Wert von b zurück.

	float convertToGreyscale(void) const;   // Rechnet RGB Vektor in Graustufen um und gibt diese zurück.

	void ausgabe(void) const;   // Gibt enthaltene RGB Werte aus.

	void changeValue(int i, float v);   // Verändert Wert an der Stelle i.
};

#endif