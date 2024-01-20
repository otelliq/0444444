/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:53:52 by otelliq           #+#    #+#             */
/*   Updated: 2024/01/03 17:22:25 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	SetType("dog");
	this->Dog_brain = new Brain();
	std::cout << "Default Dog constructor was called" << std::endl;
}
Dog::~Dog()
{
	std::cout << "Default Dog destructor was called" << std::endl;
	delete this->Dog_brain;
}
Dog::Dog(std::string name)
{
	std::cout << "Parametrized Dog "<< name << "constructor was called" << std::endl;
}
Dog::Dog(const Dog &new_)
{
	std::cout << "Copy Dog constructor was called" << std::endl;
	*this = new_;
}

void Dog::makeSound()const
{
	std::cout << "Wooffff" << std::endl;
}
Dog &Dog::operator=(const Dog &copy)
{
	this->type = copy.type;
	std::cout << "copy aasignemet operator was called" << std::endl;
	return *this;
}
