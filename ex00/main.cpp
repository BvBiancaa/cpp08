#include "easyfind.hpp"

int main( void )
{
	std::vector<int> ar1;
	ar1.push_back(42);
	ar1.push_back(2);
	ar1.push_back(34);
	ar1.push_back(72);
    
	easyfind(ar1, 42);
	easyfind(ar1, 90);

	return 0;
}