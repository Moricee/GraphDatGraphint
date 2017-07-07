// uebung02Klassen.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "ColorRGBA.h"
#include <iostream>

int main()
{
	ColorRGBA rgba1;
	ColorRGBA rgba2;
	ColorRGBA cmy;
	ColorRGBA yiq;
	ColorRGBA hsv;

	rgba1.setRGBA1(255, 255, 0);
	rgba2.setRGBA2(1.0f, 0.5f, 0.0f);
	cmy.setCMY(100, 0, 0);
	yiq.setYIQ(0.886f, 0.321f, -0.311f);
	hsv.setHSV(60, 1, 1);



	std::cout << "Ausgaben der initialisierten Vektoren" << std::endl << std::endl;

	rgba1.ausgabe();
	rgba2.ausgabe();
	cmy.ausgabe();
	yiq.ausgabe();
	hsv.ausgabe();



	int red = rgba1.red();
	int green = rgba1.green();
	int blue = rgba1.blue();
	float grey = rgba1.convertToGreyscale();
	std::cout << std::endl;
	

	std::cout << "red: " << red << std::endl;
	std::cout << "green: " << green << std::endl;
	std::cout << "blue: " << blue << std::endl;
	std::cout << std::endl;

	std::cout << "greyscale: " << grey << std::endl;

	std::cout << std::endl << std::endl;



	std::cout << "Convert Methoden RGB, CMY, YIQ, HSV mit Parametern" << std::endl << std::endl;

	rgba1.convertToRGB(0.5f, 0.1f, 0.1f, 0.0f);   // Convert Methoden RGB, CMY, YIQ, HSV
	std::cout << std::endl;
	rgba1.convertToCMY(0.5f, 0.1f, 0.1f);
	std::cout << std::endl;
	rgba1.convertToYIQ(1.0f, 1.0f, 0.0f);
	std::cout << std::endl;
	rgba1.convertToHSV(1.0f, 1.0f, 0.0f);

	std::cout << std::endl << std::endl << std::endl;



	std::cout << "Convert Methoden RGB, CMY, YIQ, HSV ohne Parameter" << std::endl << std::endl;

	std::cout << std::endl;
	rgba1.convertToCMY();
	std::cout << std::endl;
	rgba1.convertToYIQ();
	std::cout << std::endl;
	rgba1.convertToHSV();
	std::cout << std::endl << std::endl << std::endl;

	float rn = 0.0f, gn = 0.0f, bn = 0.0f;
	float cn = 0.0f, mn = 0.0f, yn1 = 0.0f;
	float yn2 = 0.0f, in = 0.0f, qn = 0.0f;
	float hn = 0.0f, sn = 0.0f, vn = 0.0f;

	rgba1.convertToRGBr(rn, gn, bn);   // Convert Methoden RGB, CMY, YIQ, HSV
	std::cout << std::endl;
	rgba1.convertToCMYr(cn, mn, yn1);
	std::cout << std::endl;
	rgba1.convertToYIQr(yn2, in, qn);
	std::cout << std::endl;
	rgba1.convertToHSVr(hn, sn, vn);

	std::cout << "r: " << rn << std::endl;
	std::cout << "g: " << gn << std::endl;
	std::cout << "b: " << bn << std::endl << std::endl;
	std::cout << "c: " << cn << std::endl;
	std::cout << "m: " << mn << std::endl;
	std::cout << "y: " << yn1 << std::endl << std::endl;
	std::cout << "y: " << yn2 / 255 << std::endl;
	std::cout << "i: " << in / 255 << std::endl;
	std::cout << "q: " << qn / 255 << std::endl << std::endl;
	std::cout << "h: " << hn << std::endl;
	std::cout << "s: " << sn << std::endl;
	std::cout << "v: " << vn / 255 << std::endl << std::endl;



	getchar();
    return 0;
}

