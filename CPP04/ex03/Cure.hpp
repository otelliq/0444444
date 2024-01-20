/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 12:14:44 by otelliq           #+#    #+#             */
/*   Updated: 2024/01/02 19:30:47 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"
class ICharacter;
class Cure : public AMateria
{
	public:
	Cure();
	Cure(const Cure& new_);
	~Cure();
	Cure& operator=( const Cure& param );
	void use( ICharacter& target );
	virtual AMateria* clone() const;
};