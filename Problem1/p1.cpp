#include <iostream>
// For an Argument of 10000 the correct result is 233168

int main(int argc, char *argv[]){

	// Parse Arguments
	if ( argc != 2 ){
		std::cout << "usage: ./p1.out limit" << std::endl;
		return -1;
    }

	// Initialise Variables
	int i, sum = 0, limit = atoi(argv[1]);

	// Add multiples of 3 until it hits the limit
	i = 3;
	while (i < limit){
		sum += i;
		i += 3;
	}

	// Add multiples of 5 that arent also multiples of 3 until it hits the limit
	i = 5;
	while (i < limit){
		if (i % 3 != 0)
			sum += i;
		i += 5;
	}

	std::cout << sum << std::endl;

	// Terminate Successfully
	return 0;
}