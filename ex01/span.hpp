#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <string_view>
#include <vector>

class Span
{
	public:
	Span();
	Span(unsigned int n);
	Span(Span const & src);
	~Span();
	Span & operator=(Span const & src);
	void addNumber(int n);
	void addMany(int start, int end);
	int shortestSpan();
	int longestSpan();
	unsigned int n;
	std::vector<int> arr;
};

#endif