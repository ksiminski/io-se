

#include <iostream>
#include <vector>

#include "clock.h"

#define debug(x)   std::cerr << __FILE__ << " (" << __LINE__ << ") " << #x << " == " << x << std::endl

int main ()
{
	std::size_t ROWS {1'000'000}, COLS {1'000};
	const std::vector<std::vector<int>> array(ROWS, std::vector<int>(COLS));

	ksi::clock stoper;
	{
		// rows first
		int sum = 0;
		stoper.start();
		for (std::size_t row = 0; row < ROWS; row++)
		{
			for (std::size_t col = 0; col < COLS; col++)
			{
				sum += array[row][col]; 
			}
		}
		stoper.stop();
		std::cout << "sum: " << sum << std::endl;
		auto time = stoper.elapsed_milliseconds();
		std::cout << "Rows first: t = " << time << " ms" <<  std::endl;
	}

	{
		// columns first
		int sum = 0;
		stoper.start();
		for (std::size_t col = 0; col < COLS; col++)
		{
			for (std::size_t row = 0; row < ROWS; row++)
			{
				sum += array[row][col]; 
			}
		}
		stoper.stop();
		auto time = stoper.elapsed_milliseconds();
		std::cout << "sum: " << sum << std::endl;
		std::cout << "Columns first: t = " << time << " ms" <<  std::endl;
	}
	return 0;
}



