/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:38:32 by otelliq           #+#    #+#             */
/*   Updated: 2023/12/28 12:43:20 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AAnimal
{
	protected :
	std::string type;
	public :
	AAnimal();
	AAnimal(std::string name);
	AAnimal(const AAnimal &new_);
	virtual void makeSound()const = 0;
	AAnimal &operator=(const AAnimal &copy);
	void	SetType(std::string Type);
	std::string getType(void)const;
	virtual ~AAnimal();
};