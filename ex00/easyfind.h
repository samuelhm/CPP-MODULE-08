/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 16:29:28 by shurtado          #+#    #+#             */
/*   Updated: 2025/03/16 16:29:38 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_H__
#define __EASYFIND_H__


#include <iostream>
#include <algorithm>
#include <iterator>

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw std::runtime_error("Value not found in container");
	return it;
}

#endif // __EASYFIND_H__
