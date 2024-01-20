/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:57:04 by otelliq           #+#    #+#             */
/*   Updated: 2024/01/03 12:14:54 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
	Brain *Dog_brain;
	public:
	Dog();
	~Dog();
	Dog(std::string name);
	Dog(const Dog &new_);
	void makeSound()const;
	Dog &operator=(const Dog &copy);

};