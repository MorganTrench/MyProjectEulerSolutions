#include <iostream>

int main(int argc, char *argv[]){

	// Parse Arguments
	if ( argc != 2 ){
		std::cout << "usage: ./p1.out limit" << std::endl;
		return -1;
    }

	// Initialise Variables
	int i = 3, sum = 0, limit = atoi(argv[1]);

	// Add multiples of 3 and 5 less than the limit to the sum
	while (i < limit){
		// Test if multiple of 3 or 5, if so add it to sum
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
		// Increment
		i += 1;
	}

	std::cout << sum << std::endl;

	// Terminate Successfully
	return 0;
}