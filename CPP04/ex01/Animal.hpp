/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:38:32 by otelliq           #+#    #+#             */
/*   Updated: 2023/12/27 14:30:35 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	protected :
	std::string type;
	public :
	Animal();
	Animal(std::string name);
	Animal(const Animal &new_);
	virtual void makeSound()const;
	Animal &operator=(const Animal &copy);
	void	SetType(std::string Type);
	std::string getType(void)const;
	virtual ~Animal();
};