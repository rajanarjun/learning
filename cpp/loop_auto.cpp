#include <iostream>

using namespace std;

int main() {

	// raw array
	int v[] = {0,1,2,3,4,5,6,7,8,9};

	// range-for-statement
	// for every element of v, place a copy in x and print it
	// no need to specify array bound when we initialize it with a list
	for (auto x:v) {
		cout << x << '\n';
	}

	// if we dont want to copy in x, just refer x to an element
	// it does change the original value of element in v
	for (auto& x : v) {
		++x;
		cout << x << '\n';
	}

	return 0;
}

