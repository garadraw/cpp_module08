/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 21:50:54 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/20 22:29:20 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	// sp.addNumber(6);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);

	sp.addMany(5);
	
	// Span newSpan;
	// newSpan = sp;
	
	std::cout << "Shortest Span: " <<sp.shortestSpan() << std::endl;
	std::cout << "Longest Span: " <<sp.longestSpan() << std::endl;
	sp.printVector();
	return (0);
}


/*
Should output:
$> ./ex01
2
14
$>
Last but not least, it would be wonderful to fill your Span using a range of iterators.
Making thousands calls to addNumber() is so annoying. Implement a member function
to add many numbers to your Span in one call.
If you don’t have a clue, study the Containers. Some member
functions take a range of iterators in order to add a sequence of
elements to the container.
8
*/