/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 21:50:50 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/20 22:22:57 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <iterator>
#include <cstdlib>


class Span
{
	public:
		Span();
		Span(unsigned int N);
		Span(Span const &src);
		~Span();

		Span &operator=(const Span &src);
		void addNumber(int i);
		int shortestSpan() const;
		int longestSpan() const;
		void printVector() const;
		void addMany(int x);
		unsigned long getN() const;
		
		class OutOfBounds: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class OutOfMemory: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class SpanImpossible: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		
	private:
		std::vector<int>	_vector;
		unsigned int		_limit;
};