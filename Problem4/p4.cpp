#include <iostream>
#include <cmath>
#include <string>

int isPalindrome(std::string str){
	int len = str.length();
	for (int i = 0; i < len; i++){
		if (str.at(i) != str.at(len - i - 1))
			return false;
	}
	return true;
}

int hasTwoThreeDigitFactors(int n){
	for (int i = 999; i > 99; i--){
		if (n % i == 0)
			if ((99 < (n / i)) && ((n / i) < 1000))
				return i;
	}
	return false;
}

int main(int argc, char *argv[]){

	// 999*999 = 998,001
	for (int i = 998001; i > 99999; i--){
		if (isPalindrome(std::to_string(i))){
			int factor = hasTwoThreeDigitFactors(i);
			if (factor) {
				std::cout << i << " = " << (i / factor) << " x " << factor << std::endl;
				return 0;
			}
		}
	}

	return 0;
}