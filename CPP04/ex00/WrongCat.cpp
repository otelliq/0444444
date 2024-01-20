/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:37:11 by otelliq           #+#    #+#             */
/*   Updated: 2023/12/27 16:35:10 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
 
WrongCat::WrongCat()
{
	std::cout << "Default WrongCat constructor was called" << std::endl;
}
WrongCat::WrongCat(const std::string type)
{
	std::cout << "Parametrized WrongCat constructor was called" << std::endl;
	this->type = type;
}
WrongCat::WrongCat(const WrongCat &new_)
{
	std::cout << "Copy WrongCat constructor was called" << std::endl;
	*this = new_;
}
void WrongCat::makeSound()const
{
	std::cout << "myaw" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Default WrongCat Destructor was called" << std::endl;
}