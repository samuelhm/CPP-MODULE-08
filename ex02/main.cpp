/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 17:47:35 by shurtado          #+#    #+#             */
/*   Updated: 2025/03/16 17:47:47 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.h"

int main()
{
	MutantStack<int> mstack;

	mstack.push(10);
	mstack.push(20);
	mstack.push(30);
	mstack.push(40);
	mstack.push(50);

	std::cout << "Elementos de MutantStack: ";
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::cout << "Elemento en la cima: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Elemento en la cima después de pop(): " << mstack.top() << std::endl;

	std::cout << "Recorrido en reversa: ";
	for (MutantStack<int>::reverse_iterator rit = mstack.rbegin(); rit != mstack.rend(); ++rit)
	{
		std::cout << *rit << " ";
	}
	std::cout << std::endl;

	std::cout << "Tamaño de la pila: " << mstack.size() << std::endl;

	return 0;
}
