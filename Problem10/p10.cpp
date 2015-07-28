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

int main(int argc, char *argv[]){

	// Check and parse Arguments
	if ( argc != 2 ){
		std::cout << "usage: ./p10.out target" << std::endl;
		// Error
		return -1;
    }
	long limit = atoi(argv[1]);
	std::cout << '\t' << "Limit: " << '\t' << limit << std::endl;

	long long sum = 2;
	for (long i = 3; i < limit; i += 2){
		if (isPrime(i)){
			sum += i;
		}
	}

	std::cout << '\t' << "Sum of Primes: " << '\t' << sum << std::endl;
	return 0;
}