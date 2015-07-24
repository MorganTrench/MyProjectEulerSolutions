#include <iostream>
#include <cmath>

int isEvenlyDivisibleInRange(int n, int range){
	for (int i = 2; i <= range; i++){
		if ( n % i != 0)
			return false;
	}
	return true;
}

int main(int argc, char *argv[]){

	// Check and parse Arguments
	if ( argc != 2 ){
		std::cout << "usage: ./p3.out target" << std::endl;
		// Error
		return -1;
    }
	int limit = atoi(argv[1]);

	// Calculate Increment
	int increment;
	if (limit % 2 == 0)
		increment = limit;
	else
		increment = 2*limit;

	int testNum = increment;
	while (true){
		if (isEvenlyDivisibleInRange(testNum, limit)){
			std::cout << testNum << std::endl;
			return 0;
		}
		testNum += increment;
	}

	// This will never get reached
	return 0;
}