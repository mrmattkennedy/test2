#include <iostream>
#include <vector>

int main() 
{
	std::vector<int> squares {12};
	
	for (int i = 0; i <= squares.size(); ++i)
		squares[ i ] = i * i;

	for (auto & x : squares)
		++x;
	for (int i = 0; i <= squares.size(); ++i)
		std::cout << i << " " << squares[i] << std::endl;

	std::cout << squares.capacity() << " " << squares.size() << std::endl;
}
