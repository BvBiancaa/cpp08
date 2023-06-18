#include "span.hpp"

int main( void )
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span tooLong = Span(11001);
	tooLong.addMany(0, 11000);
	std::cout << tooLong.shortestSpan() << std::endl;
	std::cout << tooLong.longestSpan() << std::endl;

	Span errorex = Span(11);
	errorex.addMany(0, 11000);
	std::cout << errorex.shortestSpan() << std::endl;
	std::cout << errorex.longestSpan() << std::endl;
	return 0;	
}