/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:07:48 by otelliq           #+#    #+#             */
/*   Updated: 2023/12/27 16:33:47 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default WrongAnimal constructor was called" << std::endl;
}
WrongAnimal::WrongAnimal(const std::string type)
{
	std::cout << "Parametrized WrongAnimal constructor was called" << std::endl;
	this->type = type;
}
WrongAnimal::WrongAnimal(const WrongAnimal &new_)
{
	std::cout << "Copy WrongAnimal constructor was called" << std::endl;
	*this = new_;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "Default WrongAnimal Destructor was called" << std::endl;
}
void WrongAnimal::makeSound()const
{
	std::cout << "HHHHHHHHHH" << std::endl;
}