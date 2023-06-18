#include "span.hpp"

Span::Span()
{
	this->n = 0;
	return ;
}

Span::Span(unsigned int n)
{
	this->n = n;
	this->arr[n];
	return ;
}

Span::Span(Span const & src)
{
	*this = src;
	return ;
}

Span::~Span()
{
	return ;
}

Span & Span::operator=(Span const & src)
{
	this->n = src.n;
	return *this;
}

void Span::addNumber(int num)
{
	try
	{
		if (arr.size() >= n)
			throw std::exception();
	}
	catch (std::exception &e)
	{
		std::cout << "Error: Number can't be added" << std::endl;
	}
	arr.push_back(num);
}

void Span::addMany(int start, int end)
{
	if (start < end)
	{
		while (start <= end)
		{
			try
			{
				if (arr.size() >= this->n)
					throw std::exception();
			}
			catch (std::exception &e)
			{
				std::cout << "Error: Number can't be added" << std::endl;
				return ;
			}
			arr.push_back(start);
			start++;
		}
	}
	else
	{
		while (start >= end)
		{
			try
			{
				if (arr.size() >= this->n)
					throw std::exception();
			}
			catch (std::exception &e)
			{
				std::cout << "Error: Number can't be added" << std::endl;
				return ;
			}
			arr.push_back(start);
			start--;
		}
	}
}

int Span::shortestSpan()
{
	int ret;
	std::vector<int> tmp = arr;
	try
	{
		if (arr.size() < 2)
			throw std::exception();
	}
	catch (std::exception &e)
	{
		std::cout << "Error: Not enough numbers" << std::endl;
	}
	sort(tmp.begin(), tmp.end());
	ret = (tmp[1] - tmp[0]);
	for (std::vector<int>::iterator it = tmp.begin() + 1; it < tmp.end() - 1; it++)
	{
		if (*(it + 1) - *it < ret)
			ret = *(it + 1) - *it;
	}
	return (ret);
}

int Span::longestSpan()
{
	std::vector<int> tmp = arr;
	try
	{
		if (arr.size() < 2)
			throw std::exception();
	}
	catch (std::exception &e)
	{
		std::cout << "Error: Not enough numbers" << std::endl;
	}
	sort(tmp.begin(), tmp.end());
	return (*(tmp.end() - 1) - *tmp.begin());
}