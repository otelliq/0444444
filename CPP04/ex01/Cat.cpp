/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:04:20 by otelliq           #+#    #+#             */
/*   Updated: 2024/01/03 17:22:37 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	SetType("cat");
	this->Cat_brain = new Brain();
	std::cout << "Default Cat constructor was called" << std::endl;
}
Cat::~Cat()
{
	std::cout << "Default Cat destructor was called" << std::endl;
	delete this->Cat_brain;
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
