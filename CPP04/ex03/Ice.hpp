/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:45:08 by otelliq           #+#    #+#             */
/*   Updated: 2024/01/02 19:30:54 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
	Ice();
	Ice(const Ice& new_);
	virtual AMateria* clone() const;
	void use( ICharacter& target );
	Ice& operator=( const Ice& param );
	~Ice();
};