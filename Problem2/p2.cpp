#include <iostream>

int main(int argc, char *argv[]){

	// Check and parse Arguments
	if ( argc != 2 ){
		std::cout << "usage: ./p2.out limit" << std::endl;
		// Error
		return -1;
    }
	long limit = atol(argv[1]);

	// Initialisation
	long t1, t2, t3;
	long long sum;

	// Sum every third fibonacci term (odd + odd = even)
	// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ...
	//          -        -          -
	// for convienince we will start with 1,1,2
	t1 = 0, t2 = 1, t3 = 1; sum = 0; // int i = 3;
	// std::cout << "0 : 0" << std::endl << "1 : 1" << std::endl << "2 : 1" << std::endl;
	while (t1 < limit){
		// Add to Sum
		sum += t1;
		// Calculate New Values
		t1 = t2 + t3;
		// std::cout << i << " : " << t1 << std::endl;
		t2 = t3 + t1;
		// std::cout << i+1 << " : " << t2 << std::endl;
		t3 = t1 + t2;
		// std::cout << i+2 << " : " << t3 << std::endl;
		// i += 3;
	}

	// Output result
	std::cout << sum << std::endl;

	return 0;
}