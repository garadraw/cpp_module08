/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 21:50:52 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/20 22:29:18 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/* Canonical */
Span::Span(): _limit(0)
{
}

Span::Span(uint N)
{
	try
	{
		if (this->_vector.max_size() >= N)
			this->_limit = N;
		else
			throw OutOfMemory();
	}
	catch (Span::OutOfMemory &e)
	{
		std::cout << "Error" << e.what() << std::endl;
		return ;
	}
}

Span::Span(Span const &src)
{
	*this = src;
}

Span::~Span()
{
	this->_vector.clear();
}

Span &Span::operator=(Span const &src)
{
	if (this != &src)
	{
		if (!this->_vector.empty())
			this->_vector.clear();
		if (src.getN() > 0)
		{
			this->_limit = src.getN();
			for (uint i = 0; i < this->_limit; i++)
				this->_vector.push_back(src._vector[i]);
		}
	}
	return (*this);
}

/* Public Functions */

void Span::addNumber(int i)
{
	try
	{
		if (this->_vector.size() >= (unsigned long)this->getN())
			throw Span::OutOfBounds();
		this->_vector.push_back(i);
	}
	catch (Span::OutOfBounds &e)
	{
		std::cout << "Error" << e.what() << std::endl;
	}
	return ;
}

unsigned long Span::getN() const
{
	return this->_limit;
}

void Span::printVector() const
{
	std::vector<int>::const_iterator it;
	std::cout << "	VECTOR >> ";
	for (it = this->_vector.begin(); it != this->_vector.end(); ++it)
		std::cout << *it << " ";
	std::cout<< " [SIZE: " << this->_vector.size() <<"]" << std::endl;
}

void Span::addMany(int x)
{
	srand(time(NULL));
	int r;
	for (int i = 0; i < x; i++)
	{
		try
		{
			r = rand() % (x + 100);
			if (this->_vector.size() >= (unsigned long)this->getN())
				throw Span::OutOfBounds();
			else
				this->_vector.push_back(r);
		}
		catch (Span::OutOfBounds &e)
		{
			std::cout << "Error" << e.what() << std::endl;
			return ;
		}
	}
}

int		Span::shortestSpan() const{
	try {
		if (this->_vector.size() < 2) {
		throw Span::SpanImpossible();
		}
		int span = std::abs(this->_vector[0] - this->_vector[1]);
		for (uint i = 0; i < this->_vector.size(); i++) {
			for (uint j = i + 1; j < this->_vector.size(); j++) {
				if (std::abs(this->_vector[i] - this->_vector[j]) < span)
					span = std::abs(this->_vector[i] - this->_vector[j]);

				}
			}
		return span;
		}
	catch (Span::SpanImpossible &e) {
		std::cout << "Error " << e.what() << std::endl;
		return (-1);
	}
}

int		Span::longestSpan() const{
	try {
		if (this->_vector.size() < 2) {
		throw Span::SpanImpossible();
		}
		int span = std::abs(this->_vector[0] - this->_vector[1]);
		for (uint i = 0; i < this->_vector.size(); i++) {
			for (uint j = i + 1; j < this->_vector.size(); j++) {
				if (std::abs(this->_vector[i] - this->_vector[j]) > span)
					span = std::abs(this->_vector[i] - this->_vector[j]);

				}
			}
		return span;
		}
	catch (Span::SpanImpossible &e) {
		std::cout << "Error" << e.what() << std::endl;
		return (-1);
	}
}

// EXEMPTIONS
const char *	Span::OutOfBounds::what() const throw() {
	return ("Check Vector Size");
}

const char *	Span::OutOfMemory::what() const throw() {
	return ("Not enough System Memory");
}
const char *	Span::SpanImpossible::what() const throw() {
	return ("Span requires minimum vector length: 2");
}