/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 16:55:10 by shurtado          #+#    #+#             */
/*   Updated: 2025/03/16 16:55:33 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_H__
#define __SPAN_H__

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
	private:
		std::vector<int> numbers;
		unsigned int maxSize;
	public:
		Span(unsigned int N);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();

		void addNumber(int num);
		int shortestSpan() const;
		int longestSpan() const;

		class SpanFullException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return "Span is full, cannot add more numbers.";
				}
		};

		class NotEnoughNumbersException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return "Not enough numbers to calculate span.";
				}
		};
};


#endif // __SPAN_H__
