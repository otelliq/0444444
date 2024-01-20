/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:38:20 by otelliq           #+#    #+#             */
/*   Updated: 2023/12/28 12:43:10 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Default AAnimal constructor was called" << std::endl;
}
AAnimal::~AAnimal()
{
	std::cout << "Default AAnimal destructor was called" << std::endl;
}
AAnimal::AAnimal(std::string name)
{
	std::cout << "Parametrized AAnimal " << name <<"constructor was called" << std::endl;		
}
AAnimal::AAnimal(const AAnimal &new_)
{
	std::cout << "copy AAnimal constructor was called" << std::endl;
	*this = new_;
}
void	AAnimal::makeSound()const
{
	std::cout << "AAnimal makeSound was called" << std::endl;
}
AAnimal &AAnimal::operator=(const AAnimal &copy){
	this->type = copy.type;
	std::cout <<"Copy assignment operator was called"<<std::endl;
	return *this;
}
void	AAnimal::SetType(const std::string Type)
{
	this->type = Type;
}
std::string AAnimal::getType(void)const
{
	return type;
}
