#include <iostream>
#include "math.hpp"

int main(int argc, char** argv)
{
	double x;
	while (std::cin >> x) {
		std::cout << sinc(x) << '\n';
	}
	return 0;
}
