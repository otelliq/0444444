/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 12:13:25 by otelliq           #+#    #+#             */
/*   Updated: 2024/01/02 19:51:54 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	type = "cure";
	// std::cout << "Default Cure construnctor was called" << std::endl;
}

Cure::Cure(const Cure& new_)
{
	*this = new_;
	// std::cout << "Copy Cure construnctor was called" << std::endl;
}

Cure::~Cure()
{
	// std::cout << "Default Cure destructor was called" << std::endl;
}
	
Cure& Cure::operator=( const Cure& param )
{
	this->type = param.type;
	return *this;
}
AMateria* Cure::clone() const
{
	return(new Cure(*this));
}

void    Cure::use( ICharacter& target )
{
	std::cout << "* heals "<<target.getName()<< "’s wounds *" <<std::endl;
}