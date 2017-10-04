#include <iostream>



int main()
{
	double mph = 50;
	const double conversionFactor = (5280 * .3048) / (60 * 60) ;
	double mps = mph*conversionFactor;

	std::cout << mps << std::endl;

	std::cin.get();

	return 0;
}