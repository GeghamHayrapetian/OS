#include <iostream>
#include "Complex.h"
#include<algorithm>
#include <iterator>
#include <vector>

int main()
{
	Complex c1(2, 3);
	Complex c2(4, 5);
	Complex c3(2, 7);
	Complex c4(8, 9);
	Complex c5(4, 6);
	std::vector<Complex> arr;
	arr.push_back(c1);
	arr.push_back(c2);
	arr.push_back(c3);
	arr.push_back(c4);
	arr.push_back(c5);
	std::sort(std::begin(arr), std::end(arr));
	for (int i = 0; i < arr.size(); ++i) {
		std::cout << arr.at(i) << std::endl;
	}

	return 0;
}
