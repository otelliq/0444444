/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 17:28:16 by otelliq           #+#    #+#             */
/*   Updated: 2024/01/02 20:51:31 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	int i = 0;
	while(i < 4)
	{
		matr[i] = NULL;
		i++;
	}
}
MateriaSource::~MateriaSource()
{
	int i = 0;
	while(i < 4)
	{
		if(matr[i])
			delete matr[i];
		i++;
	}
	// std::cout << "" << std::endl;
}
MateriaSource::MateriaSource(MateriaSource const & param)
{
	*this = param;
}
MateriaSource& MateriaSource::operator=(MateriaSource const& param)
{
	int i = 0;
	while(i < 0)
	{
		matr[i] = param.matr[i];
		i++;
	}
	return *this;
}
void MateriaSource::learnMateria( AMateria* param)
{
	int i = 0;
	while (i < 4)
	{
		if (matr[i] == NULL)
		{
			matr[i] = param;
			return;
		}
		i++;
	}
}
AMateria*   MateriaSource::createMateria( std::string const& type)
{
	int i = 0;
	while(i < 4)
	{
		if(matr[i])
		{
			if(matr[i]->getType() == type)
				return matr[i]->clone();
		}
		i++;
	}
	return NULL;
}
