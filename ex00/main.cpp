/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 12:09:45 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/20 21:43:04 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{

	int arr[] = {16, 2, 77, 29};
	std::vector<int> lst(arr, arr + sizeof(arr) / sizeof(int)); 
	int rs = ::easyfind(lst, 77);
	std::cout << rs << std::endl;

	return (0);
}