#include <iostream>
#include <cmath>


int main(int argc, char *argv[]){

	// Check and parse Arguments
	if ( argc != 2 ){
		std::cout << "usage: ./p3.out target" << std::endl;
		// Error
		return -1;
    }
	int limit = atoi(argv[1]);

	long long sumOfSquares = 0;
	long long squareOfSum = 0;  // Will be summed first, squared after loop

	for (long i = 1; i <= limit; i++){
		squareOfSum += i;
		sumOfSquares += i*i;
	}
	squareOfSum = squareOfSum*squareOfSum;

	std::cout << "Sum of Squares: " << sumOfSquares << std::endl;
	std::cout << "Square of Sum: " << squareOfSum << std::endl;
	std::cout << "Difference: " << (squareOfSum - sumOfSquares) << std::endl;
	return 0;
}