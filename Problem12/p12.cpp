#include <iostream>
#include <cmath>
// TODO IMPROVE, FAR TOO SLOW

// Finds the number of divisors of a number
// Needs Improvement/Optimisation
int getNumberOfDivisors(long long n){
	int count = 2;
	for (int i = 2; i <= (n/2); i++){
		if (n % i == 0){
			count += 1;
		}
	}
	return count;
}

int main(int argc, char *argv[]){

	// Check and parse Arguments
	if ( argc != 2 ){
		std::cout << "usage: ./p12.out target" << std::endl;
		// Error
		return -1;
    }
	int divisorTarget = atoi(argv[1]);

	int i = 0, divisors = 0;
	long long trialTriangleNum = 0;
	while (divisors <= divisorTarget){
		i += 1;
		trialTriangleNum += i;
		divisors = getNumberOfDivisors(trialTriangleNum);
	}
	std::cout << trialTriangleNum << " is the first triangle number to have over " << divisorTarget << " divisors" << std::endl;

	return 0;
}