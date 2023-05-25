#include "FFT.h"

void FFT::fft(std::vector<std::complex<double>>& refComplexNumbers, const bool invert)
{
	const int size = static_cast<int>(refComplexNumbers.size());

	if (size == 1)
		return;

	std::vector<std::complex<double>> first(size / 2);
	std::vector<std::complex<double>> second(size / 2);

	for (int i = 0, j = 0; i < size; i += 2, ++j)
	{
		first[j] = refComplexNumbers[i];
		second[j] = refComplexNumbers[i + 1];
	}

	fft(first, invert);
	fft(second, invert);

	const double ang = 2 * M_PI / size * (invert ? -1 : 1);

	std::complex<double> w(1);
	std::complex<double> wn(std::cos(ang), std::sin(ang));

	for (int i = 0; i < size / 2; ++i)
	{
		refComplexNumbers[i] = first[i] + w * second[i];
		refComplexNumbers[i + size / 2] = first[i] - w * second[i];

		if (invert)
		{
			refComplexNumbers[i] /= 2; 
			refComplexNumbers[i + size / 2] /= 2;
		}

		w *= wn;
	}

}
