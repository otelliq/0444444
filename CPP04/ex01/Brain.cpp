/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:58:44 by otelliq           #+#    #+#             */
/*   Updated: 2023/12/27 18:47:44 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain constructor was called" << std::endl;
}
Brain &Brain::operator=(const Brain &copy)
{
	std::cout <<"Copy assignment operator was called"<<std::endl;
	int i = 0;
	while(i < 100)
	{
		this->ideas[i] = copy.ideas[i];
		i++;
	}
	return *this;
}
Brain::Brain(const Brain &new_)
{
	std::cout << "Copy Brain constructor was called" << std::endl;
	*this = new_;
}

Brain::~Brain()
{
	std::cout << "Default Brain Destructor was called" << std::endl;
}