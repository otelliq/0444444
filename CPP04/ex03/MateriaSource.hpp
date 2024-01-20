/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 17:24:10 by otelliq           #+#    #+#             */
/*   Updated: 2024/01/01 22:40:33 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
	AMateria* matr[4];
	public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(MateriaSource const & param);
	MateriaSource& operator=(MateriaSource const& param);
	void	learnMateria( AMateria* );
	AMateria*   createMateria( std::string const& type);


};