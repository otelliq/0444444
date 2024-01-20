/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 11:20:12 by otelliq           #+#    #+#             */
/*   Updated: 2024/01/03 18:10:29 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	size = 0;
	for (int i= 0;i < 4;i++){
		this->Inventory[i] = NULL;
		tmp[i] = NULL;
	}
	// std::cout << "Default Character constructor was called" << std::endl;
}
Character::Character(std::string const &name)
{
	size = 0;
	for (int i= 0;i < 4;i++){
		this->Inventory[i] = NULL;
		tmp[i] = NULL;
	}
	// std::cout << "Copy Character constructor was called" << std::endl;
	this->name = name; 
}
Character::Character(Character const &new_)
{
	// std::cout << "Copy constructor was called" << std::endl;
	*this = new_;
}
Character &Character::operator=(const Character& param)
{
	this->name = param.name;
	return *this;
}
Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete Inventory[i];
	for (int i = 0; i < size; i++)
		delete tmp[i];
	// std::cout << "" << std::endl;
}

void	Character::equip(AMateria* param)
{
	int i = 0;
	
	while(i < 4)
	{
		if (this->Inventory[i] == 0)
		{
			this->Inventory[i] = param;
			break;
		}
		i++;
	}
	if (i == 4) {
		tmp[size] = param;
		size++;
	}
}
void	Character::unequip(int i)
{
	if(this->Inventory[i])
	{
		tmp[size] = Inventory[i];
		Inventory[i] = NULL;
		size++;
		// delete this->Inventory[i];
	}
}

std::string const& Character::getName() const
{
	return this->name;
}

void	Character::use(int i, ICharacter& param)
{
	if (this->Inventory[i] && (i >= 0 && i < 4))
	{
		this->Inventory[i]->use(param);
	}
}
