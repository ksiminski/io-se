

#include <iostream>
#include <vector>

#include "clock.h"

#define debug(x)   std::cerr << __FILE__ << " (" << __LINE__ << ") " << #x << " == " << x << std::endl




int main ()
{
	std::size_t W {1'000'000}, K {1'000};
	const std::vector<std::vector<int>> tab(W, std::vector<int>(K));

	ksi::clock stoper;
	{
		// przechodzenie wierszami
		int suma = 0;
		stoper.start();
		for (std::size_t w = 0; w < W; w++)
		{
			for (std::size_t k = 0; k < K; k++)
			{
				suma += tab[w][k]; 
			}
		}
		stoper.stop();
		std::cout << "suma: " << suma << std::endl;
		auto czas_wierszami = stoper.elapsed_milliseconds();
		std::cout << "Przechodzenie wierszami: t = " << czas_wierszami << " ms" <<  std::endl;
	}

	{
		// przechodzenie kolumnami
		int suma = 0;
		stoper.start();
		for (std::size_t k = 0; k < K; k++)
		{
			for (std::size_t w = 0; w < W; w++)
			{
				suma += tab[w][k]; 
			}
		}
		stoper.stop();
		auto czas_kolumnami = stoper.elapsed_milliseconds();
		std::cout << "suma: " << suma << std::endl;
		std::cout << "Przechodzenie kolumnami: t = " << czas_kolumnami << " ms" <<  std::endl;
	}
	return 0;
}



