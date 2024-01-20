/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 16:32:09 by otelliq           #+#    #+#             */
/*   Updated: 2024/01/02 19:51:06 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
	// std::cout << "AMateria default constructor was called" << std::endl;
}

AMateria::~AMateria()
{
	// std::cout << "AMateria default constructor was called" << std::endl;
}
AMateria::AMateria(std::string const &type)
{
	this->type = type;
}
AMateria::AMateria(const AMateria& copy_)
{
	*this = copy_;
}
std::string const &AMateria::getType() const
{
	return this->type;
}
void AMateria::use(ICharacter& __unused target)
{
	// (void)target;
	// std::cout << "AMateria " << this->type << " was used on " << target.getName()<< std::endl; //chi7aja na9sa hna
}