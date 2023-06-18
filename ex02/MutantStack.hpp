#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

template <class T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack()
		{
			return ;
		};
		MutantStack(MutantStack const & src)
		{
			*this = src;
			return ;
		};
		virtual ~MutantStack()
		{
			return ;
		};
		MutantStack &operator=(const MutantStack &src)
		{
			if (this != &src)
				*this = src;
			return *this;
		};
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{
			return (this->c.begin());
		};
		iterator end()
		{
			return (this->c.end());
		};
};

#endif