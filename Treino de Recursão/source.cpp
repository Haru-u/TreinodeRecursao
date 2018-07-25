#include <iostream>
#include <string>

//https://www.techstudy.org/CplusplusLanguage/function-and-recursion-programming-exercises

//11. Write C++ program to find power of a number using recursion
int PowerOfNumber( int num, int pwr){
	
	if (pwr == 1) {
		return num;
	}
	else {
		PowerOfNumber(num*num, --pwr);
	}
}

//12. Write C++ program to find sum of natural numbers in given range using recursion
int SumNatNumbers(unsigned int max, unsigned int min, unsigned int sum){	
	
	if (min == max) {
		return min;
	}
	else {
		sum += min + SumNatNumbers(min + 1, max, sum);
		return sum;
	}
}

//exercises from my university 

//Write a recursive functionthat reads a string of size N
//and prints it on the screen in the inverse order("abc" prints "cba"). 
//use: void invert(string text, int n);
//n = quantity of characters on the string

void invert(std::string text, int n) {
	
	if (n == -1) {
		std::cout << "" << std::endl;
		return;
	}
	else {
		std::cout << text[n];
		invert(text, n - 1);
	}
}

//Palindromes are words,phrases or any unit type that's equal,
//not mattering if it's read from the left or from the right.
//Write a program that verifies if a word is a palindrome.
std::string invert(std::string text, std::string inText, int n) {

	if (n == -1) {
		return inText;
	}
	else {
		inText += text[n];
		invert(text, inText, n - 1);
	}
}

void CheckPalindrome(std::string word) {

	std::string x = "";
	std::string result = invert(word, x, word.size());
	std::cout << result << std::endl;

	if (result == word) {
		std::cout << "true" << std::endl;
	}
	else {
		std::cout << "false" << std::endl;
	}
}

int main(){

	//std::cout << PowerOfNumber(4, 2) << std::endl;
	//std::cout << SumNatNumbers(5,2,0) << std::endl; //14
	//invert("abc", 3);
	CheckPalindrome("arara");

	system("pause");
	return 0;
}