/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 22:33:53 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/20 23:03:54 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <list>
// #include <cstdlib>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(MutantStack<T> const &src);
		MutantStack &operator=(MutantStack<T> const &src);
		virtual ~MutantStack();
	
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin(void)
	{
		return(this->c.begin());
	}
	iterator end(void)
	{
		return (this->c.end());
	}

	const_iterator begin() const
	{
		return (this->c.begin);
	}
	const_iterator end() const
	{
		return (this->c.end());
	}
	
	reverse_iterator rbegin()
	{
		return (this->rbegin());
	}
		reverse_iterator rend()
	{
		return (this->rend());
	}

	const_reverse_iterator rbegin() const
	{
		return (this->c.rbegin());
	}
	const_reverse_iterator rend() const
	{
		return (this->c.rend());
	}
};

template <typename T>
MutantStack<T>::MutantStack(void)
{
	
}

template <typename T>
MutantStack<T>::~MutantStack(void)
{
	
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &src)
{
	*this = src;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &src)
{
	if (this != &src)
		this->c = src.c;
	return (*this);
}
