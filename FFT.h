#ifndef FFT_H
#define FFT_H

#include <vector>
#include <complex>
#define _USE_MATH_DEFINES // Для получения числа Пи
#include <math.h>

class FFT
{
public:
	static void fft(std::vector<std::complex<double>>& refComplexNumbers, const bool invert); // Параметр invert показывает, прямое или обратное ДПФ следует вычислить
};

#endif

