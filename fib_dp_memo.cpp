#include <iostream>
#include <vector>


int fib(int n,std::vector<int> &v) {

	if(v[n] != -1)
		return v[n];
	
	else {

		v[n] = fib(n-1,v) + fib(n-2,v);
		return v[n];
	}
}

int main() {
	
	int i,n;
	std::cout << "Calculate f_n, n = ";
	std::cin >> n;

	std::vector<int> v (n+1,-1);
	
	v[0] = 0;
	v[1] = 1;
	
	std::cout << fib(n,v) ;
	

	return 0;
}