#include <iostream>

//https://www.techstudy.org/CplusplusLanguage/function-and-recursion-programming-exercises

//11. Write C++ program to find power of a number using recursion

int PowerOfNumber( int num, int pwr) {

	if (pwr == 1) {
		return num;
	}
	else {
		PowerOfNumber(num*num, --pwr);
	}
}

int main() {

	std::cout << PowerOfNumber(4, 2) << std::endl;

	system("pause");
	return 0;
}