/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:38:20 by otelliq           #+#    #+#             */
/*   Updated: 2023/12/27 14:30:48 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Animal constructor was called" << std::endl;
}
Animal::~Animal()
{
	std::cout << "Default Animal destructor was called" << std::endl;
}
Animal::Animal(std::string name)
{
	std::cout << "Parametrized Animal " << name <<"constructor was called" << std::endl;		
}
Animal::Animal(const Animal &new_)
{
	std::cout << "copy Animal constructor was called" << std::endl;
	*this = new_;
}
void	Animal::makeSound()const
{
	std::cout << "Animal makeSound was called" << std::endl;
}
Animal &Animal::operator=(const Animal &copy){
	this->type = copy.type;
	std::cout <<"Copy assignment operator was called"<<std::endl;
	return *this;
}
void	Animal::SetType(const std::string Type)
{
	this->type = Type;
}
std::string Animal::getType(void)const
{
	return type;
}
