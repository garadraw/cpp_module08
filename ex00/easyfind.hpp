/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 12:09:37 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/20 21:23:46 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#define EASYFIND_HPP

#include <iostream>
#include <vector>

template <typename T>
int	easyfind(std::vector<T>list, int needle)
{
	for (typename std::vector<T>::iterator it = list.begin(); it!= list.end(); ++it)
	{
		if (*it == needle)
			return (*it);
	}
	return (-1);
}
