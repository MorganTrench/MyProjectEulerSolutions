#include <iostream>
#include <cmath>

// Tested Correct (obviously faster methods are possible)
int isPrime(long n){
	long sqrtn = (int) (sqrt((double) n));
	// Look for any factors, all will be odd if not 2
	if ((n % 2 == 0) && (n != 2))
		return false;
	for (long i = 3; i <= sqrtn; i+=2){
		if (n % i == 0)
			return false;
	}
	return true;
}

// TODO Optimise
int main(int argc, char *argv[]){
	// Check and parse Arguments
	if ( argc != 2 ){
		std::cout << "usage: ./p3.out target" << std::endl;
		// Error
		return -1;
    }
	long n = atol(argv[1]);
	long sqrtn = (long) (sqrt((double) n));
	std::cout << "Input:" << '\t' << n << std::endl;

	// Get the largest prime factor
	for (long i = 2; i <= n/2; i++){
		if (n % i == 0){
			if (isPrime(n / i)){
				std::cout << "Largest Prime Factorization:" << '\t' << i << " x " <<  (n / i) << "-prime" << std::endl;
				return 0;
			}
		}
	}

	// Terminate
	std::cout << "No Prime Factors..." << std::endl;
	return 0;
}