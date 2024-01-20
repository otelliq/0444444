/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:49:30 by otelliq           #+#    #+#             */
/*   Updated: 2024/01/02 19:50:24 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	type = "ice";
	// std::cout << "Default Ice construnctor was called" << std::endl;
}

Ice::Ice(const Ice& new_)
{
	*this = new_;
	// std::cout << "Copy Ice construnctor was called" << std::endl;
}

Ice::~Ice()
{
	// std::cout << "Default Ice destructor was called" << std::endl;
}
AMateria* Ice::clone() const
{
	return(new Ice(*this));
}

Ice& Ice::operator=( const Ice& param )
{
	this->type = param.type;
	return *this;
}
void    Ice::use( ICharacter& target )
{
   std::cout << "* shoots an ice bolt at "<< target.getName()<<" *" << std::endl;
}