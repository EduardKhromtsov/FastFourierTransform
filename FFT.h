#ifndef FFT_H
#define FFT_H

#include <vector>
#include <complex>
#define _USE_MATH_DEFINES 
#include <math.h>

class FFT
{
public:
	static void fft(std::vector<std::complex<double>>& refComplexNumbers, const bool invert); 
};

#endif

