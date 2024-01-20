/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:02:35 by otelliq           #+#    #+#             */
/*   Updated: 2023/12/27 12:40:45 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
	public :
	Cat();
	~Cat();
	Cat(std::string name);
	Cat(const Cat &new_);
	void makeSound()const;
	Cat &operator=(const Cat &copy);
};