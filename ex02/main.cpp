/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 22:33:56 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/21 11:51:26 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	{
		std::cout << "***Subject test***" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "Top value: " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "Stack size: " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	{
		std::cout << "***List comparison***" << std::endl;
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << "Top value: " << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << "Stack size: " << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	std::cout << std::endl << "***Reverse test***" << std::endl;

	{
		std::cout << "Stack Forwards::" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		mstack.push(3);
		mstack.push(62);
		std::cout << "Top value: " << mstack.top() << std::endl;
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	// {
	// 	std::cout << "Stack Backwards::" << std::endl;
	// 	MutantStack<int> mstack;
	// 	mstack.push(5);
	// 	mstack.push(17);
	// 	mstack.push(3);
	// 	mstack.push(62);
	// 	std::cout << "Top value: " << mstack.top() << std::endl;
	// 	MutantStack<int>::reverse_iterator it = mstack.rbegin();
	// 	MutantStack<int>::reverse_iterator ite = mstack.rend();
	// 	++it;
	// 	--it;
	// 	while (it != ite)
	// 	{
	// 		std::cout << *it << std::endl;
	// 		++it;
	// 	}
	// }

	std::cout << std::endl << "***Copy tests***" << std::endl;

	{	
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		mstack.push(3);
		std::cout << "Top value for mstack: " << mstack.top() << std::endl;

		MutantStack<int> s(mstack);
		std::cout << "Top value for s: " << mstack.top() << std::endl;
		s.pop();
		s.push(90);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		MutantStack<int>::iterator it2 = s.begin();
		MutantStack<int>::iterator ite2 = s.end();
		while (it != ite && it2 != ite2)
		{
			std::cout << "mstack: " << *it << "| s: " << *it2 << std::endl;
			++it;
			++it2;
		}
	}
	return 0;
}