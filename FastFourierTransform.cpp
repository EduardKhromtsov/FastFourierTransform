
#include <iostream>
#include "FFT.h"

int main()
{
    std::complex<double> first(3, 2);
    std::complex<double> second(5, 6);
    std::complex<double> third(8, -5);
    std::complex<double> fourth(-3, 7);

    std::vector<std::complex<double>> result;

    result.push_back(first);
    result.push_back(second);
    result.push_back(third);
    result.push_back(fourth);

    FFT::fft(result, false);

    for (int i = 0; i < result.size(); ++i)
        std::cout << result[i] << " ";

    std::cout << std::endl;

    FFT::fft(result, true);

    for (int i = 0; i < result.size(); ++i)
        std::cout << result[i] << " ";

    std::cout << std::endl;

}


