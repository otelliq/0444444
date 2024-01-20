/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:04:20 by otelliq           #+#    #+#             */
/*   Updated: 2023/12/27 12:40:45 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Cat constructor was called" << std::endl;
}
Cat::~Cat()
{
	std::cout << "Default Cat destructor was called" << std::endl;
}
Cat::Cat(std::string name)
{
	std::cout << "Parametrized cat "<< name << "constructor was called" << std::endl;
}
Cat::Cat(const Cat &new_)
{
	std::cout << "Copy cat constructor was called" << std::endl;
	*this = new_;
}
void Cat::makeSound()const
{
	std::cout << "Meoooowww" << std::endl;
}
Cat &Cat::operator=(const Cat &copy)
{
	this->type = copy.type;
	std::cout << "copy assignement operator was called" << std::endl;
	return *this;
}
