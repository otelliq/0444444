/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 10:35:22 by otelliq           #+#    #+#             */
/*   Updated: 2024/01/03 18:10:57 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
	std::string name;
	int		size;
	AMateria *Inventory[4];
	AMateria *tmp[256];
	public:
	Character();
	Character(std::string const &name);
	Character(Character const &new_);
	~Character();

	Character &operator=(const Character& param);
	std::string const& getName() const;
	void	equip(AMateria* param);
	void	unequip(int i);
	void	use(int i, ICharacter& param);
};