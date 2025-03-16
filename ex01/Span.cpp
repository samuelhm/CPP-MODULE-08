/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 16:56:17 by shurtado          #+#    #+#             */
/*   Updated: 2025/03/16 16:58:31 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : maxSize(N) {}

Span::Span(const Span &other) { *this = other; }

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		this->numbers = other.numbers;
		this->maxSize = other.maxSize;
	}
	return *this;
}

Span::~Span() {}


void Span::addNumber(int num)
{
	if (numbers.size() >= maxSize)
		throw Span::SpanFullException();
	numbers.push_back(num);
}

int Span::shortestSpan() const
{
	if (numbers.size() < 2)
		throw Span::NotEnoughNumbersException();

	std::vector<int> sorted = numbers;
	std::sort(sorted.begin(), sorted.end());

	int minSpan = sorted[1] - sorted[0];
	for (size_t i = 1; i < sorted.size() - 1; i++)
		minSpan = std::min(minSpan, sorted[i + 1] - sorted[i]);
	return minSpan;
}

int Span::longestSpan() const
{
	if (numbers.size() < 2)
		throw Span::NotEnoughNumbersException();

	int minVal = *std::min_element(numbers.begin(), numbers.end());
	int maxVal = *std::max_element(numbers.begin(), numbers.end());

	return maxVal - minVal;
}
