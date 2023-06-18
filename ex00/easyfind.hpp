#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <vector>

template <typename T>

typename T::iterator easyfind(T &container, int n)
{
	typename T::iterator it = std::find(container.begin(), container.end(), n);
	if (it != container.end())
	{
		int	pos = 0;
		long unsigned int i = 0;
		while (i < container.size())
		{
			if (container[i] == n)
			{
				pos = i;
				break;
			}
			i++;
		}
		std::cout << "Value found at position: " << pos << std::endl;
		return it;
	}
	try
	{
		throw std::exception();
	}
	catch (std::exception &e)
	{
		std::cout << "Value not found" << std::endl;
	}
	return it;
	
}

#endif