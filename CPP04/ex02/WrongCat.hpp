/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:37:23 by otelliq           #+#    #+#             */
/*   Updated: 2023/12/27 16:34:26 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
	std::string type;
	public:
	WrongCat();
	WrongCat(const std::string type);
	WrongCat(const WrongCat &new_);
	void makeSound()const;
	~WrongCat();
};